@class NSMutableOrderedSet;

@interface BUJSInjector : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *rules;

+ (id)sharedInstance;

- (void)addInjectRuleWithScript:(id)a0 regex:(id)a1 key:(id)a2;
- (void)removeScriptWithKey:(id)a0;
- (void)removeAllScript;
- (void)injectScriptInWebView:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
