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

typedef struct _SEGMENT_OBJECT
{
  /* 0x0000 */ void* BaseAddress;
  /* 0x0008 */ unsigned long TotalNumberOfPtes;
  /* 0x0010 */ union _LARGE_INTEGER SizeOfSegment;
  /* 0x0018 */ unsigned long NonExtendedPtes;
  /* 0x001c */ unsigned long ImageCommitment;
  /* 0x0020 */ struct _CONTROL_AREA* ControlArea;
  /* 0x0028 */ struct _SUBSECTION* Subsection;
  /* 0x0030 */ struct _MMSECTION_FLAGS* MmSectionFlags;
  /* 0x0038 */ struct _MMSUBSECTION_FLAGS* MmSubSectionFlags;
} SEGMENT_OBJECT, *PSEGMENT_OBJECT; /* size: 0x0040 */

