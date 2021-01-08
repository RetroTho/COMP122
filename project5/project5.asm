             .data


msg:         .asciiz "Enter a value for n \n"
result1:     .asciiz "f(" 
result2:     .asciiz ") = "
newline:     .asciiz "\n"
             .text 

main: 

            li $v0, 4
            la $a0, msg
            syscall
            li $v0, 5
            syscall
            add $t0, $0, $v0

            li $v0, 4
            la $a0, result1
            syscall

            add $a0, $0, $t0
            li $v0, 1 
            li $t0, 5
            syscall 

            #jal recFunc

            li $v0, 4
            la $a0, result2
            syscall
            mov.d $f12, $f0
            li $v0, 3 
            syscall
            
            li $v0, 10
            syscall