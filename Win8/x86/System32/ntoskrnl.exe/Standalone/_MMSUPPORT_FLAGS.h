typedef struct _MMSUPPORT_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char WorkingSetType : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned char ForceCredits : 3; /* bit position: 3 */
    /* 0x0000 */ unsigned char MaximumWorkingSetHard : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char MinimumWorkingSetHard : 1; /* bit position: 7 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0001 */ unsigned char SessionMaster : 1; /* bit position: 0 */
    /* 0x0001 */ unsigned char TrimmerState : 2; /* bit position: 1 */
    /* 0x0001 */ unsigned char Reserved : 1; /* bit position: 3 */
    /* 0x0001 */ unsigned char PageStealers : 4; /* bit position: 4 */
  }; /* bitfield */
  /* 0x0002 */ unsigned char MemoryPriority : 8; /* bit position: 0 */
  struct /* bitfield */
  {
    /* 0x0003 */ unsigned char WsleDeleted : 1; /* bit position: 0 */
    /* 0x0003 */ unsigned char VmExiting : 1; /* bit position: 1 */
    /* 0x0003 */ unsigned char ExpansionFailed : 1; /* bit position: 2 */
    /* 0x0003 */ unsigned char Available : 5; /* bit position: 3 */
  }; /* bitfield */
} MMSUPPORT_FLAGS, *PMMSUPPORT_FLAGS; /* size: 0x0004 */

