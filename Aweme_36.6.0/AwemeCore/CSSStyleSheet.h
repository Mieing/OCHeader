@class CSSRule, CSSRuleList;

@interface CSSStyleSheet : NSObject

@property (retain, nonatomic) CSSRule *ownerRule;
@property (retain, nonatomic) CSSRuleList *cssRules;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (long long)insertRule:(id)a0 index:(unsigned long long)a1;
- (void)deleteRule:(unsigned long long)a0;

@end
