#ifndef VISITOR_H
#define VISITOR_H
#include "exp.h"
#include <list>

class BinaryExp;
class NumberExp;
class IFExp;
class IdentifierExp;
class NotExp;
class AssignStatement;
class PrintStatement;
class IfStatement;
class WhileStatement;
class ForStatement;
class Program;

class Visitor {
public:
    virtual int visit(IFExp* exp) = 0;
    virtual int visit(BinaryExp* exp) = 0;
    virtual int visit(NumberExp* exp) = 0;
    virtual int visit(IdentifierExp* exp) = 0;
    virtual int visit(NotExp* exp) = 0;
    virtual void visit(AssignStatement* stm) = 0;
    virtual void visit(PrintStatement* stm) = 0;
    virtual void visit(IfStatement* stm) = 0;
    virtual void visit(WhileStatement* stm) = 0;
    virtual void visit(ForStatement* stm) = 0;
};

class PrintVisitor : public Visitor {
public:
    void imprimir(Program* program);
    int visit(IFExp* exp) override;
    int visit(BinaryExp* exp) override;
    int visit(NumberExp* exp) override;
    int visit(IdentifierExp* exp) override;
    int visit(NotExp* exp) override;
    void visit(AssignStatement* stm) override;
    void visit(PrintStatement* stm) override;
    void visit(IfStatement* stm) override;
    void visit(WhileStatement* stm) override;
    void visit(ForStatement* stm) override;
};

class EVALVisitor : public Visitor {
public:
    void ejecutar(Program* program);
    int visit(IFExp* exp) override;
    int visit(BinaryExp* exp) override;
    int visit(NumberExp* exp) override;
    int visit(NotExp* exp) override;
    int visit(IdentifierExp* exp) override;
    void visit(AssignStatement* stm) override;
    void visit(PrintStatement* stm) override;
    void visit(IfStatement* stm) override;
    void visit(WhileStatement* stm) override;
    void visit(ForStatement* stm) override;
};

#endif // VISITOR_H