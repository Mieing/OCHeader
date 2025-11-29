@interface WCFinderJumpInfoAdModel : WCFinderJumpInfoBaseModel

- (void)jumpToH5:(id)a0 fromVC:(id)a1 params:(id)a2;
- (void)jumpToNative:(id)a0 fromVC:(id)a1 params:(id)a2;
- (void)jumpToAdCanvasWithAdParams:(id)a0 jumpParams:(id)a1 screenType:(int)a2 fromVC:(id)a3;
- (void)jumpToAppStoreWithAppStoreParams:(id)a0 screenType:(int)a1 fromVC:(id)a2;
- (void)jumpToLive:(id)a0 fromVC:(id)a1 params:(id)a2;
- (void)reportLivingIconDidClickWithLiveID:(unsigned long long)a0 params:(id)a1;
- (void)jumpToAppDirectlyWithAppParams:(id)a0 jumpParams:(id)a1 fromVC:(id)a2;

@end
