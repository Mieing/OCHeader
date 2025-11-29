@class AWEPOIVirgoCharactersManager;

@interface AWEPOIVirgoOptiStrategyRuleParsers : NSObject

@property (retain, nonatomic) AWEPOIVirgoCharactersManager *charactersManager;

- (id)checkRules:(id)a0;
- (BOOL)checkRule:(id)a0;
- (id)convertToPostfix:(id)a0;
- (BOOL)evaluatePostfixExpression:(id)a0 rule:(id)a1;
- (BOOL)excuteCharactorOperator:(id)a0 rule:(id)a1;
- (id)checkAllRules:(id)a0;
- (void).cxx_destruct;
- (id)tokenize:(id)a0;
- (BOOL)isLetter:(id)a0;

@end
