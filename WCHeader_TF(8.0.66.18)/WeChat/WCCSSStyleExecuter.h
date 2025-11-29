@class NSMutableDictionary;

@interface WCCSSStyleExecuter : NSObject

@property (retain, nonatomic) NSMutableDictionary *dicStyleRule;

- (id)init;
- (void)executeWithTarget:(id)a0 cssStyles:(id)a1;
- (void)applyRuleWithTarget:(id)a0 value:(id)a1 PropertySetter:(id /* block */)a2;
- (void).cxx_destruct;

@end
