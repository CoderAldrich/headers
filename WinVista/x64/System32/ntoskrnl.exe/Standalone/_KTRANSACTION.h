typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char Type;
      union
      {
        /* 0x0001 */ unsigned char Abandoned;
        /* 0x0001 */ unsigned char Absolute;
        /* 0x0001 */ unsigned char NpxIrql;
        struct
        {
          /* 0x0001 */ unsigned char Signalling;
          union
          {
            /* 0x0002 */ unsigned char Size;
            struct
            {
              /* 0x0002 */ unsigned char Hand;
              union
              {
                /* 0x0003 */ unsigned char Inserted;
                /* 0x0003 */ unsigned char DebugActive;
                /* 0x0003 */ unsigned char DpcActive;
              }; /* size: 0x0001 */
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    /* 0x0000 */ volatile long Lock;
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

typedef struct _KMUTANT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ struct _LIST_ENTRY MutantListEntry;
  /* 0x0028 */ struct _KTHREAD* OwnerThread;
  /* 0x0030 */ unsigned char Abandoned;
  /* 0x0031 */ unsigned char ApcDisable;
  /* 0x0032 */ char __PADDING__[6];
} KMUTANT, *PKMUTANT; /* size: 0x0038 */

typedef struct _RTL_BALANCED_LINKS
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS* Parent;
  /* 0x0008 */ struct _RTL_BALANCED_LINKS* LeftChild;
  /* 0x0010 */ struct _RTL_BALANCED_LINKS* RightChild;
  /* 0x0018 */ char Balance;
  /* 0x0019 */ unsigned char Reserved[3];
  /* 0x001c */ long __PADDING__[1];
} RTL_BALANCED_LINKS, *PRTL_BALANCED_LINKS; /* size: 0x0020 */

typedef struct _KTMOBJECT_NAMESPACE_LINK
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS Links;
  /* 0x0020 */ unsigned char Expired;
  /* 0x0021 */ char __PADDING__[7];
} KTMOBJECT_NAMESPACE_LINK, *PKTMOBJECT_NAMESPACE_LINK; /* size: 0x0028 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef enum _KTRANSACTION_STATE
{
  KTransactionUninitialized = 0,
  KTransactionActive = 1,
  KTransactionPreparing = 2,
  KTransactionPrepared = 3,
  KTransactionInDoubt = 4,
  KTransactionCommitted = 5,
  KTransactionAborted = 6,
  KTransactionDelegated = 7,
  KTransactionPrePreparing = 8,
  KTransactionForgotten = 9,
  KTransactionRecovering = 10,
  KTransactionSavepointing = 11,
  KTransactionPrePrepared = 12,
} KTRANSACTION_STATE, *PKTRANSACTION_STATE;

typedef union _CLS_LSN
{
  union
  {
    struct // _TAG_UNNAMED_53
    {
      /* 0x0000 */ unsigned int idxRecord;
      /* 0x0004 */ unsigned long cidContainer;
    } /* size: 0x0008 */ offset;
    /* 0x0000 */ unsigned __int64 ullOffset;
  }; /* size: 0x0008 */
} CLS_LSN, *PCLS_LSN; /* size: 0x0008 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_5
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _KDPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Importance;
  /* 0x0002 */ unsigned short Number;
  /* 0x0008 */ struct _LIST_ENTRY DpcListEntry;
  /* 0x0018 */ void* DeferredRoutine /* function */;
  /* 0x0020 */ void* DeferredContext;
  /* 0x0028 */ void* SystemArgument1;
  /* 0x0030 */ void* SystemArgument2;
  /* 0x0038 */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0040 */

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_18
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

typedef struct _KTIMER
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ union _ULARGE_INTEGER DueTime;
  /* 0x0020 */ struct _LIST_ENTRY TimerListEntry;
  /* 0x0030 */ struct _KDPC* Dpc;
  /* 0x0038 */ long Period;
  /* 0x003c */ long __PADDING__[1];
} KTIMER, *PKTIMER; /* size: 0x0040 */

typedef enum _KTRANSACTION_OUTCOME
{
  KTxOutcomeUninitialized = 0,
  KTxOutcomeUndetermined = 1,
  KTxOutcomeCommitted = 2,
  KTxOutcomeAborted = 3,
  KTxOutcomeUnavailable = 4,
} KTRANSACTION_OUTCOME, *PKTRANSACTION_OUTCOME;

typedef struct _KTRANSACTION_HISTORY
{
  /* 0x0000 */ enum // _TAG_UNNAMED_55
  {
    KTMOH_CommitTransaction_Result = 1,
    KTMOH_RollbackTransaction_Result = 2,
  } RecordType;
  /* 0x0004 */ unsigned long Payload;
} KTRANSACTION_HISTORY, *PKTRANSACTION_HISTORY; /* size: 0x0008 */

typedef struct _KTRANSACTION
{
  /* 0x0000 */ struct _KEVENT OutcomeEvent;
  /* 0x0018 */ unsigned long cookie;
  /* 0x0020 */ struct _KMUTANT Mutex;
  /* 0x0058 */ struct _KTRANSACTION* TreeTx;
  /* 0x0060 */ struct _KTMOBJECT_NAMESPACE_LINK GlobalNamespaceLink;
  /* 0x0088 */ struct _KTMOBJECT_NAMESPACE_LINK TmNamespaceLink;
  /* 0x00b0 */ struct _GUID UOW;
  /* 0x00c0 */ enum _KTRANSACTION_STATE State;
  /* 0x00c4 */ unsigned long Flags;
  /* 0x00c8 */ struct _LIST_ENTRY EnlistmentHead;
  /* 0x00d8 */ unsigned long EnlistmentCount;
  /* 0x00dc */ unsigned long RecoverableEnlistmentCount;
  /* 0x00e0 */ unsigned long PrePrepareRequiredEnlistmentCount;
  /* 0x00e4 */ unsigned long PrepareRequiredEnlistmentCount;
  /* 0x00e8 */ unsigned long OutcomeRequiredEnlistmentCount;
  /* 0x00ec */ unsigned long PendingResponses;
  /* 0x00f0 */ struct _KENLISTMENT* SuperiorEnlistment;
  /* 0x00f8 */ union _CLS_LSN LastLsn;
  /* 0x0100 */ struct _LIST_ENTRY PromotedEntry;
  /* 0x0110 */ struct _KTRANSACTION* PromoterTransaction;
  /* 0x0118 */ void* PromotePropagation;
  /* 0x0120 */ unsigned long IsolationLevel;
  /* 0x0124 */ unsigned long IsolationFlags;
  /* 0x0128 */ union _LARGE_INTEGER Timeout;
  /* 0x0130 */ struct _UNICODE_STRING Description;
  /* 0x0140 */ struct _KTHREAD* RollbackThread;
  /* 0x0148 */ struct _WORK_QUEUE_ITEM RollbackWorkItem;
  /* 0x0168 */ struct _KDPC RollbackDpc;
  /* 0x01a8 */ struct _KTIMER RollbackTimer;
  /* 0x01e8 */ struct _LIST_ENTRY LsnOrderedEntry;
  /* 0x01f8 */ enum _KTRANSACTION_OUTCOME Outcome;
  /* 0x01fc */ unsigned long NextSavepoint;
  /* 0x0200 */ struct _KTM* Tm;
  /* 0x0208 */ __int64 CommitReservation;
  /* 0x0210 */ struct _KTRANSACTION_HISTORY TransactionHistory[10];
  /* 0x0260 */ unsigned long TransactionHistoryCount;
  /* 0x0264 */ long __PADDING__[1];
} KTRANSACTION, *PKTRANSACTION; /* size: 0x0268 */

