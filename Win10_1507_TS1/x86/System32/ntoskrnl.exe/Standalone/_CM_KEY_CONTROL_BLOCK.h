typedef struct _CM_KEY_HASH
{
  /* 0x0000 */ unsigned long ConvKey;
  /* 0x0004 */ struct _CM_KEY_HASH* NextHash;
  /* 0x0008 */ struct _HHIVE* KeyHive;
  /* 0x000c */ unsigned long KeyCell;
} CM_KEY_HASH, *PCM_KEY_HASH; /* size: 0x0010 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _CACHED_CHILD_LIST
{
  /* 0x0000 */ unsigned long Count;
  union
  {
    /* 0x0004 */ unsigned long ValueList;
    /* 0x0004 */ struct _CM_KEY_CONTROL_BLOCK* RealKcb;
  }; /* size: 0x0004 */
} CACHED_CHILD_LIST, *PCACHED_CHILD_LIST; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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

typedef struct _CM_INTENT_LOCK
{
  /* 0x0000 */ unsigned long OwnerCount;
  /* 0x0004 */ struct _CM_KCB_UOW** OwnerTable;
} CM_INTENT_LOCK, *PCM_INTENT_LOCK; /* size: 0x0008 */

typedef struct _CHILD_LIST
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ unsigned long List;
} CHILD_LIST, *PCHILD_LIST; /* size: 0x0008 */

typedef struct _CM_KEY_CONTROL_BLOCK
{
  /* 0x0000 */ unsigned long RefCount;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned long ExtFlags : 16; /* bit position: 0 */
    /* 0x0004 */ unsigned long PrivateAlloc : 1; /* bit position: 16 */
    /* 0x0004 */ unsigned long Delete : 1; /* bit position: 17 */
    /* 0x0004 */ unsigned long HiveUnloaded : 1; /* bit position: 18 */
    /* 0x0004 */ unsigned long Decommissioned : 1; /* bit position: 19 */
    /* 0x0004 */ unsigned long LockTablePresent : 1; /* bit position: 20 */
    /* 0x0004 */ unsigned long TotalLevels : 10; /* bit position: 21 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned long DelayedDeref : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned long DelayedClose : 1; /* bit position: 1 */
    /* 0x0008 */ unsigned long Parking : 1; /* bit position: 2 */
  }; /* bitfield */
  union
  {
    /* 0x000c */ struct _CM_KEY_HASH KeyHash;
    struct
    {
      /* 0x000c */ unsigned long ConvKey;
      /* 0x0010 */ struct _CM_KEY_HASH* NextHash;
      /* 0x0014 */ struct _HHIVE* KeyHive;
      /* 0x0018 */ unsigned long KeyCell;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x001c */ struct _EX_PUSH_LOCK KcbPushlock;
  union
  {
    /* 0x0020 */ struct _KTHREAD* Owner;
    /* 0x0020 */ long SharedCount;
  }; /* size: 0x0004 */
  /* 0x0024 */ unsigned long SlotHint;
  /* 0x0028 */ struct _CM_KEY_CONTROL_BLOCK* ParentKcb;
  /* 0x002c */ struct _CM_NAME_CONTROL_BLOCK* NameBlock;
  /* 0x0030 */ struct _CM_KEY_SECURITY_CACHE* CachedSecurity;
  /* 0x0034 */ struct _CACHED_CHILD_LIST ValueCache;
  union
  {
    /* 0x003c */ struct _CM_INDEX_HINT_BLOCK* IndexHint;
    /* 0x003c */ unsigned long HashKey;
    /* 0x003c */ unsigned long SubKeyCount;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0040 */ struct _LIST_ENTRY KeyBodyListHead;
    /* 0x0040 */ struct _LIST_ENTRY FreeListEntry;
  }; /* size: 0x0008 */
  /* 0x0048 */ struct _CM_KEY_BODY* KeyBodyArray[4];
  /* 0x0058 */ union _LARGE_INTEGER KcbLastWriteTime;
  /* 0x0060 */ unsigned short KcbMaxNameLen;
  /* 0x0062 */ unsigned short KcbMaxValueNameLen;
  /* 0x0064 */ unsigned long KcbMaxValueDataLen;
  struct /* bitfield */
  {
    /* 0x0068 */ unsigned long KcbUserFlags : 4; /* bit position: 0 */
    /* 0x0068 */ unsigned long KcbVirtControlFlags : 4; /* bit position: 4 */
    /* 0x0068 */ unsigned long KcbDebug : 8; /* bit position: 8 */
    /* 0x0068 */ unsigned long Flags : 16; /* bit position: 16 */
  }; /* bitfield */
  /* 0x006c */ struct _LIST_ENTRY KCBUoWListHead;
  union
  {
    /* 0x0074 */ struct _LIST_ENTRY DelayQueueEntry;
    /* 0x0074 */ volatile unsigned char* Stolen;
  }; /* size: 0x0008 */
  /* 0x007c */ struct _CM_TRANS* TransKCBOwner;
  /* 0x0080 */ struct _CM_INTENT_LOCK KCBLock;
  /* 0x0088 */ struct _CM_INTENT_LOCK KeyLock;
  /* 0x0090 */ struct _CHILD_LIST TransValueCache;
  /* 0x0098 */ struct _CM_TRANS* TransValueListOwner;
  /* 0x009c */ struct _UNICODE_STRING* FullKCBName;
} CM_KEY_CONTROL_BLOCK, *PCM_KEY_CONTROL_BLOCK; /* size: 0x00a0 */

