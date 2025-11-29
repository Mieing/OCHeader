@class BDREOperator;

@interface BDREOperatorCommand : BDRECommand

@property (retain, nonatomic) BDREOperator *operator;
@property (nonatomic) unsigned long long opDataNumber;

- (void)execute:(id)a0 withEnv:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)instruction;
- (id)initWithOperator:(id)a0;

@end
