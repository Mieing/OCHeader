@interface WCTimeLineVideoPreloadMgr : NSObject

- (void)startVideoPreload:(id)a0;
- (void)stopVideoPreload:(id)a0;
- (BOOL)isEnableVideoPreload;
- (BOOL)isPreloadNetMatch;
- (BOOL)isPreloadTimeMatch;
- (long long)predownNetType;
- (long long)preloadPercent:(double)a0;
- (id)preloadDisableTime;

@end
