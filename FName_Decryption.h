__int64 __fastcall sub_464C310(unsigned __int16 *a1, _WORD *a2)
{
  _WORD *v2; // rdi
  int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // r8d
  __int64 result; // rax
  unsigned int v8; // kr00_4
  int v9; // ecx

  v2 = Name;
  v4 = NameLength;
  v5 = read<uintptr_t>(BaseAddress + 0x12F67D4);
  v6 = v5 ^ 0x9C677CC5;
  v8 = v5;
  result = 1041204193 * v5;
  v9 = 0;
  if ( v4 )
  {
    do
    {
      result = v9 + v8 % 0x21;
      ++v9;
      v6 += result;
      *v2++ ^= v6;
    }
    while ( v9 < v4 );
  }
  return result;
}
