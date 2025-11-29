@class NSString;

@interface BDRuleEqualQuickExecutor : BDRuleQuickExecutor

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) id constValue;
@property (nonatomic) BOOL notEqual;

- (BOOL)evaluateWithEnv:(id)a0 error:(id *)a1;
- (id)initWithCel:(id)a0 identifier:(id)a1 constValue:(id)a2 notEqual:(BOOL)a3;
- (void).cxx_destruct;

@end
