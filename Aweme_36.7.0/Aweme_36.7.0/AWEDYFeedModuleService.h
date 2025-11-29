@interface AWEDYFeedModuleService : AWEFeedModuleService

- (void)startNetworkDetection;
- (void)startNetworkByPassOnlyDetectionIfNeeded;
- (void)onFeedContentReceived:(BOOL)a0 withError:(id)a1;
- (BOOL)isInDetectingProcess;
- (BOOL)isInNoNetworkState;
- (void)checkNoNetworkNoticeStatusWithDelay:(double)a0 completion:(id /* block */)a1;
- (id)currentDisplayingItemID;
- (void)updateCurrentDisplayingItemID:(id)a0;
- (void)getSchemeFromShareTokenForType:(unsigned long long)a0;
- (void)transferFromShareToken:(id)a0;
- (void)transferFromShareToken:(id)a0 withCompleteHandler:(id /* block */)a1;
- (BOOL)containShareToken:(id)a0;
- (void)parseActivityToken:(id)a0 carrierType:(long long)a1 sourceFrom:(id)a2 Completion:(id /* block */)a3;
- (id)musicalModelOwnerDisplayName:(id)a0;
- (BOOL)isDetectionEnabled;

@end
