typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _MMPFNENTRY
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char PageLocation : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned char WriteInProgress : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char Modified : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char ReadInProgress : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char CacheAttribute : 2; /* bit position: 6 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0001 */ unsigned char Priority : 3; /* bit position: 0 */
    /* 0x0001 */ unsigned char OnProtectedStandby : 1; /* bit position: 3 */
    /* 0x0001 */ unsigned char InPageError : 1; /* bit position: 4 */
    /* 0x0001 */ unsigned char Spare : 1; /* bit position: 5 */
    /* 0x0001 */ unsigned char RemovalRequested : 1; /* bit position: 6 */
    /* 0x0001 */ unsigned char ParityError : 1; /* bit position: 7 */
  }; /* bitfield */
} MMPFNENTRY, *PMMPFNENTRY; /* size: 0x0002 */

typedef struct _MMPTE_HARDWARE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Dirty1 : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Owner : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 CacheDisable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Accessed : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Dirty : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 LargePage : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 Global : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 CopyOnWrite : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Unused : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Write : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 36; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 reserved1 : 4; /* bit position: 48 */
    /* 0x0000 */ unsigned __int64 SoftwareWsIndex : 11; /* bit position: 52 */
    /* 0x0000 */ unsigned __int64 NoExecute : 1; /* bit position: 63 */
  }; /* bitfield */
} MMPTE_HARDWARE, *PMMPTE_HARDWARE; /* size: 0x0008 */

typedef struct _HARDWARE_PTE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Write : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Owner : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 CacheDisable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Accessed : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Dirty : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 LargePage : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 Global : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 CopyOnWrite : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 reserved0 : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 36; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 reserved1 : 4; /* bit position: 48 */
    /* 0x0000 */ unsigned __int64 SoftwareWsIndex : 11; /* bit position: 52 */
    /* 0x0000 */ unsigned __int64 NoExecute : 1; /* bit position: 63 */
  }; /* bitfield */
} HARDWARE_PTE, *PHARDWARE_PTE; /* size: 0x0008 */

typedef struct _MMPTE_PROTOTYPE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 DemandFillProto : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 HiberVerifyConverted : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 Unused1 : 5; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 ReadOnly : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 Combined : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 11 */
    /* 0x0000 */ __int64 ProtoAddress : 48; /* bit position: 16 */
  }; /* bitfield */
} MMPTE_PROTOTYPE, *PMMPTE_PROTOTYPE; /* size: 0x0008 */

typedef struct _MMPTE_SOFTWARE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 PageFileLow : 4; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 InStore : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 PageFileReserved : 1; /* bit position: 13 */
    /* 0x0000 */ unsigned __int64 PageFileAllocated : 1; /* bit position: 14 */
    /* 0x0000 */ unsigned __int64 UsedPageTableEntries : 10; /* bit position: 15 */
    /* 0x0000 */ unsigned __int64 Unused : 7; /* bit position: 25 */
    /* 0x0000 */ unsigned __int64 PageFileHigh : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_SOFTWARE, *PMMPTE_SOFTWARE; /* size: 0x0008 */

typedef struct _MMPTE_TIMESTAMP
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 MustBeZero : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 PageFileLow : 4; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 Reserved : 20; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 GlobalTimeStamp : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_TIMESTAMP, *PMMPTE_TIMESTAMP; /* size: 0x0008 */

typedef struct _MMPTE_TRANSITION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Write : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Spare : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 CacheDisable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 36; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 Unused : 16; /* bit position: 48 */
  }; /* bitfield */
} MMPTE_TRANSITION, *PMMPTE_TRANSITION; /* size: 0x0008 */

typedef struct _MMPTE_SUBSECTION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Unused0 : 4; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Unused1 : 5; /* bit position: 11 */
    /* 0x0000 */ __int64 SubsectionAddress : 48; /* bit position: 16 */
  }; /* bitfield */
} MMPTE_SUBSECTION, *PMMPTE_SUBSECTION; /* size: 0x0008 */

typedef struct _MMPTE_LIST
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 OneEntry : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 filler0 : 3; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 filler1 : 16; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 NextEntry : 36; /* bit position: 28 */
  }; /* bitfield */
} MMPTE_LIST, *PMMPTE_LIST; /* size: 0x0008 */

typedef struct _MMPTE
{
  union // _TAG_UNNAMED_124
  {
    union
    {
      /* 0x0000 */ unsigned __int64 Long;
      /* 0x0000 */ volatile unsigned __int64 VolatileLong;
      /* 0x0000 */ struct _MMPTE_HARDWARE Hard;
      /* 0x0000 */ struct _HARDWARE_PTE Flush;
      /* 0x0000 */ struct _MMPTE_PROTOTYPE Proto;
      /* 0x0000 */ struct _MMPTE_SOFTWARE Soft;
      /* 0x0000 */ struct _MMPTE_TIMESTAMP TimeStamp;
      /* 0x0000 */ struct _MMPTE_TRANSITION Trans;
      /* 0x0000 */ struct _MMPTE_SUBSECTION Subsect;
      /* 0x0000 */ struct _MMPTE_LIST List;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u;
} MMPTE, *PMMPTE; /* size: 0x0008 */

typedef struct _MMPFN
{
  union // _TAG_UNNAMED_127
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Flink : 36; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 NodeFlinkHigh : 28; /* bit position: 36 */
      }; /* bitfield */
      /* 0x0000 */ unsigned __int64 WsIndex;
      /* 0x0000 */ struct _KEVENT* Event;
      /* 0x0000 */ void* Next;
      /* 0x0000 */ void* volatile VolatileNext;
      /* 0x0000 */ struct _KTHREAD* KernelStackOwner;
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY NextStackPfn;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
  union // _TAG_UNNAMED_128
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 Blink : 36; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 NodeBlinkHigh : 20; /* bit position: 36 */
        /* 0x0008 */ unsigned __int64 TbFlushStamp : 4; /* bit position: 56 */
        /* 0x0008 */ unsigned __int64 SpareBlink : 4; /* bit position: 60 */
      }; /* bitfield */
      /* 0x0008 */ struct _MMPTE* ImageProtoPte;
      /* 0x0008 */ unsigned __int64 ShareCount;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u2;
  union
  {
    /* 0x0010 */ struct _MMPTE* PteAddress;
    /* 0x0010 */ void* volatile VolatilePteAddress;
    /* 0x0010 */ volatile long Lock;
    /* 0x0010 */ unsigned __int64 PteLong;
  }; /* size: 0x0008 */
  union // _TAG_UNNAMED_129
  {
    union
    {
      struct
      {
        /* 0x0018 */ unsigned short ReferenceCount;
        /* 0x001a */ struct _MMPFNENTRY e1;
      }; /* size: 0x0004 */
      struct // _TAG_UNNAMED_130
      {
        union
        {
          /* 0x0018 */ unsigned short ReferenceCount;
          /* 0x0018 */ volatile short VolatileReferenceCount;
        }; /* size: 0x0002 */
        union
        {
          /* 0x001a */ unsigned short ShortFlags;
          /* 0x001a */ volatile unsigned short VolatileShortFlags;
        }; /* size: 0x0002 */
      } /* size: 0x0004 */ e2;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u3;
  /* 0x001c */ unsigned short NodeBlinkLow;
  struct /* bitfield */
  {
    /* 0x001e */ unsigned char Unused : 4; /* bit position: 0 */
    /* 0x001e */ unsigned char VaType : 4; /* bit position: 4 */
  }; /* bitfield */
  union
  {
    /* 0x001f */ unsigned char ViewCount;
    /* 0x001f */ unsigned char NodeFlinkLow;
  }; /* size: 0x0001 */
  /* 0x0020 */ struct _MMPTE OriginalPte;
  union // _TAG_UNNAMED_131
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x0028 */ unsigned __int64 PteFrame : 36; /* bit position: 0 */
        /* 0x0028 */ unsigned __int64 Channel : 2; /* bit position: 36 */
        /* 0x0028 */ unsigned __int64 Unused1 : 1; /* bit position: 38 */
        /* 0x0028 */ unsigned __int64 Unused2 : 1; /* bit position: 39 */
        /* 0x0028 */ unsigned __int64 Unused3 : 13; /* bit position: 40 */
        /* 0x0028 */ unsigned __int64 PfnExists : 1; /* bit position: 53 */
        /* 0x0028 */ unsigned __int64 PageIdentity : 3; /* bit position: 54 */
        /* 0x0028 */ unsigned __int64 PrototypePte : 1; /* bit position: 57 */
        /* 0x0028 */ unsigned __int64 PageColor : 6; /* bit position: 58 */
      }; /* bitfield */
      /* 0x0028 */ unsigned __int64 EntireField;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u4;
} MMPFN, *PMMPFN; /* size: 0x0030 */

