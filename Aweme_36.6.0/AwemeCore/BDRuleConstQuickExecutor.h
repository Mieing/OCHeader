@interface BDRuleConstQuickExecutor : BDRuleQuickExecutor

@property (retain, nonatomic) id value;

- (BOOL)evaluateWithEnv:(id)a0 error:(id *)a1;
- (id)initWithCel:(id)a0 value:(id)a1;
- (void).cxx_destruct;

@end
