// Classic ARM instruction generation
// Copyright (c) 1994-2006 Sun Microsystems Inc.
// All Rights Reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//
// - Redistributions of source code must retain the above copyright notice,
// this list of conditions and the following disclaimer.
//
// - Redistribution in binary form must reproduce the above copyright
// notice, this list of conditions and the following disclaimer in the
// documentation and/or other materials provided with the
// distribution.
//
// - Neither the name of Sun Microsystems or the names of contributors may
// be used to endorse or promote products derived from this software without
// specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
// FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
// COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
// OF THE POSSIBILITY OF SUCH DAMAGE.

// The original source code covered by the above license above has been
// modified significantly by Google Inc.
// Copyright 2012 the V8 project authors. All rights reserved.

#ifndef V8_ARM_ASSEMBLER_ARM_ARM_H_
#define V8_ARM_ASSEMBLER_ARM_ARM_H_

private:
void addrmod1(Instr instr, Register rn, Register rd, const Operand& x);
void addrmod2(Instr instr, Register rd, const MemOperand& x);
void addrmod3(Instr instr, Register rd, const MemOperand& x);
void addrmod4(Instr instr, Register rn, RegList rl);

public:

// Read/patch instructions
Instr instr_at(int pos) { return *reinterpret_cast<Instr*>(buffer_ + pos); }
void instr_at_put(int pos, Instr instr) {
  *reinterpret_cast<Instr*>(buffer_ + pos) = instr;
}
static Instr instr_at(byte* pc) { return *reinterpret_cast<Instr*>(pc); }
static void instr_at_put(byte* pc, Instr instr) {
  *reinterpret_cast<Instr*>(pc) = instr;
}

#endif