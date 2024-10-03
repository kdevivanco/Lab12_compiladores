Compiladores
Laboratorio 12
Objetivo
Elaborar el intérprete de una gramática con sentencias de control repetitivo y
operaciones booleanas utilizando el patrón de diseño Visitor.
Programa
Se tiene implementado
o Program ::= StmtList
o StmtList ::= Stmt ( ; Stmt )*
o Stmt ::= id = CExp |
print ( CExp ) |
if CExp then StmtList [else StmtList] endif |
while CExp do StmtList endwhile |
o CExp ::= Exp [(<|<=|==) Exp]
o Exp ::= Term ((+ | -) Term)*
o Term ::= Factor ((*|/) Factor)*
o Factor ::= id | Num | ( AExp ) | ifexp (AExp , AExp , AExp )
Problema 1
Implementar la gramática:
o Program ::= StmtList
o StmtList ::= Stmt ( ; Stmt )*
o Stmt ::= id = AExp |
print ( AExp ) |
if AExp then StmtList [else StmtList] endif |
while AExp do StmtList endwhile |
for( AExp , AExp , AExp) StmtList endfor
o AExp ::= BExp [(and|or) BExp]
o BExp ::= CExp| not CExp
o CExp ::= Exp [(<|<=|==) Exp]
o Exp ::= Term ((+ | -) Term)*
o Term ::= Factor ((*|/) Factor)*
o Factor ::= id | Num | ( AExp ) | ifexp (AExp , AExp , AExp )
