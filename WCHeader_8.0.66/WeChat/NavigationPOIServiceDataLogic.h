@interface NavigationPOIServiceDataLogic : NSObject <IWALocalCacheMgrExt>

- (id)init;
- (void)openTecentNavigationWeApp:(id)a0 weAppUrl:(id)a1;
- (void)preloadTecentNavigationWeApp;
- (BOOL)isCurrentTimePrefetchAvaliable;
- (void)resetPrefetchTime;
- (void)onUpdateAppPkgComplete:(BOOL)a0 withAppInfoData:(id)a1 errorCode:(unsigned int)a2 errorMsg:(id)a3;

@end
