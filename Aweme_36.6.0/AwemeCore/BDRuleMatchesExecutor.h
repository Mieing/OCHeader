@class NSString;

@interface BDRuleMatchesExecutor : BDRuleQuickExecutor

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) id constArray;

- (BOOL)evaluateWithEnv:(id)a0 error:(id *)a1;
- (id)initWithCel:(id)a0 identifier:(id)a1 constArray:(id)a2;
- (void).cxx_destruct;

@end
