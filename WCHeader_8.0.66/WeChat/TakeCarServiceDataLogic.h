@interface TakeCarServiceDataLogic : NSObject <IWALocalCacheMgrExt>

- (id)init;
- (void)openTecentCarWeApp:(id)a0;
- (void)preloadTecentCarWeApp;
- (BOOL)isCurrentTimePrefetchAvaliable;
- (void)resetPrefetchTime;
- (void)onUpdateAppPkgComplete:(BOOL)a0 withAppInfoData:(id)a1 errorCode:(unsigned int)a2 errorMsg:(id)a3;

@end
