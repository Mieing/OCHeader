@class NSString;

@interface BDRuleInOutQuickExecutor : BDRuleQuickExecutor

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) id constArray;
@property (nonatomic) BOOL notIn;

- (BOOL)evaluateWithEnv:(id)a0 error:(id *)a1;
- (id)initWithCel:(id)a0 identifier:(id)a1 constArray:(id)a2 notIn:(BOOL)a3;
- (void).cxx_destruct;

@end
