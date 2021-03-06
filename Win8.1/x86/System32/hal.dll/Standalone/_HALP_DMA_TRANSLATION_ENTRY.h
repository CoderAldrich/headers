typedef struct _HALP_DMA_TRANSLATION_ENTRY
{
  /* 0x0000 */ unsigned long PhysicalAddress;
  /* 0x0004 */ struct _HALP_DMA_TRANSLATION_ENTRY* Next;
  /* 0x0008 */ unsigned long MappedLength;
  union // _TAG_UNNAMED_28
  {
    union
    {
      /* 0x000c */ void* VirtualAddress;
      struct // _TAG_UNNAMED_29
      {
        struct /* bitfield */
        {
          /* 0x000c */ unsigned long BoundToMaster : 1; /* bit position: 0 */
          /* 0x000c */ unsigned long BoundToScatterPool : 1; /* bit position: 1 */
          /* 0x000c */ unsigned long OwnedByMaster : 1; /* bit position: 2 */
          /* 0x000c */ unsigned long OwnedByScatterPool : 1; /* bit position: 3 */
          /* 0x000c */ unsigned long TemporaryMapping : 1; /* bit position: 4 */
          /* 0x000c */ unsigned long Address : 27; /* bit position: 5 */
        }; /* bitfield */
      } /* size: 0x0004 */ Flags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  /* 0x0010 */ struct _HALP_DMA_TRANSLATION_ENTRY* NextMapping;
} HALP_DMA_TRANSLATION_ENTRY, *PHALP_DMA_TRANSLATION_ENTRY; /* size: 0x0014 */

