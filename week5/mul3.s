# -----------------------------------------------------------------------------
# A 64-bit function that returns the multiple value of its three 64-bit integer
# arguments.  The function has signature:
#
#   int64_t mul3(int64_t x, int64_t y, int64_t z)
#
# Note that the parameters have already been passed in rdi, rsi, and rdx.  We
# just have to return the value in rax.
# -----------------------------------------------------------------------------

        .globl  mul3
        
        .text
mul3:
        mov     %rdi, %rax                # result (rax) initially holds x
        imul     %rsi, %rax                # is x less than y?
        imul   %rdx, %rax                # if so, set result to y
        ret                               # the max will be in eax