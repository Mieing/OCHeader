@interface AWEMVAutoPlayController : AWEDCFeedBaseController <AWEMVAutoPlayControllerProtocol>

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (void)listDidReloadData;
- (BOOL)isSplashShowing;
- (void)windowDidResignKeyNotification:(id)a0;
- (void)windowDidBecomeKeyNotification:(id)a0;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)mvPageContext;
- (void)handleSplashDisappear:(id)a0;
- (void)prerenderPlayerIfSplashShowing;
- (void)triggerStartAutoPlay;
- (void)triggerStopAutoPlay;
- (BOOL)shouldAutoPlay;
- (void)containerViewDidLoad;

@end
