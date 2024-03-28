.386

PUBLIC _modifyArray1@8


.model flat
.data
.code


  




_modifyArray1@8 proc
        push esp
        mov ebp, esp
        
        mov   ecx, [ebp + 12]        
        mov   esi, [ebp + 8]  
        mov   ebx, 0
        mov edx, 0
        outer_loop :
            mov   eax, [esi]                                 
                        
            cmp   ecx, 0            
            je    loop_end
            mov edi, esi
            
            
            dec ecx
            mov ebx, ecx

            inner_loop :
                cmp ebx, 0
                je unique
                add edi, 4
                cmp [edi], eax
                je not_unique
                dec ebx
                jmp inner_loop
            
            unique:
                inc edx
                add   esi, 4
                jmp outer_loop

            not_unique :
                add   esi, 4
                jmp outer_loop
           
            pre_end:
                inc edx
                jmp loop_end
            loop_end :

    ; Загружаем результат в eax для возврата из функции
    mov eax, edx
    mov esi, [ebp + 8]
    ; Подготовка к завершению
    mov esp, ebp
    pop ebp
    ret 8  ; Освобождаем 8 байт, зарезервированных для параметров
    _modifyArray1@8 endp
    end