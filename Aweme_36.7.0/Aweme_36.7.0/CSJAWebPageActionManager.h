@interface CSJAWebPageActionManager : NSObject

+ (id)sharedManager;

- (void)openBUWebViewControllerURL:(id)a0 model:(id)a1 context:(id)a2;
- (void)openBrowserModel:(id)a0;
- (BOOL)handleActionWithModel:(id)a0 context:(id)a1;

@end
