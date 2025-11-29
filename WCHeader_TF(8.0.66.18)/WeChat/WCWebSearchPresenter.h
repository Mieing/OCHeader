@class WCSearchPageState;

@interface WCWebSearchPresenter : WebSearchPluginBase

@property (readonly, nonatomic) WCSearchPageState *store;

- (void)handleEvent:(id)a0 userInfo:(id)a1;
- (void)onSwitchSearchContext:(id)a0;
- (void)notyfySwitchSearchContext:(id)a0;
- (void)performSearchWithParams:(id)a0;
- (void)hideKeyboard;

@end
