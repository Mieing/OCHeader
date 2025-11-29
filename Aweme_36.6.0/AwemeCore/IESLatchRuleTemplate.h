@class NSArray, NSMutableArray, NSString;

@interface IESLatchRuleTemplate : NSObject <IESLatchConfigTemplate>

@property (retain, nonatomic) NSMutableArray *rules;
@property (retain, nonatomic) NSArray *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedOperatorMap;
+ (id)sharedFormatter;

- (void)addRuleNode:(id)a0;
- (unsigned long long)countOfRuleNodes;
- (BOOL)matchItemNode:(id)a0 withSchema:(id)a1 globalProps:(id)a2;
- (id)processAPI:(id)a0 withSchema:(id)a1 globalProps:(id)a2 variables:(id)a3 traceId:(id)a4 ruleItemNode:(id)a5;
- (unsigned long long)p_getStringType:(id)a0;
- (id)process:(id)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;

@end
