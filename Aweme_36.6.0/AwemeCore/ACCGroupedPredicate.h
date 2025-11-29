@class NSMapTable;

@interface ACCGroupedPredicate : NSObject

@property (retain, nonatomic) NSMapTable *predicates;
@property (nonatomic) unsigned long long operand;

- (void)addPredicate:(id /* block */)a0 with:(id)a1;
- (id)initWithOperand:(unsigned long long)a0;
- (void)removePredicate:(id /* block */)a0;
- (BOOL)evaluateWithObject:(id)a0 output:(id *)a1;
- (BOOL)evaluateWithAnd:(id)a0 output:(id *)a1;
- (BOOL)evaluateWithOr:(id)a0 output:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)evaluate;
- (BOOL)evaluateWithObject:(id)a0;

@end
