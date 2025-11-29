@class NSArray, NSMutableDictionary, NSString;

@interface IESPrefetchRuleTemplate : NSObject <IESPrefetchConfigTemplate>

@property (retain, nonatomic) NSMutableDictionary *rules;
@property (retain, nonatomic) NSMutableDictionary *regexRules;
@property (retain, nonatomic) NSArray *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addRuleNode:(id)a0;
- (unsigned long long)countOfRuleNodes;
- (unsigned long long)p_getStringType:(id)a0;
- (void)addRegexRuleNode:(id)a0;
- (id)matchNodeForName:(id)a0 withSchema:(id)a1;
- (BOOL)matchItemNode:(id)a0 withSchema:(id)a1;
- (id)processAPI:(id)a0 withSchema:(id)a1 variables:(id)a2 traceId:(id)a3;
- (id)ruleNodeForName:(id)a0;
- (id)regexRuleNodeForName:(id)a0;
- (unsigned long long)countOfRegexRuleNodes;
- (id)process:(id)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;

@end
