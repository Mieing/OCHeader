@interface WeChat.MagicBrandService : WeChat.MagicBrandBaseService

- (BOOL)shouldPreLayoutWhenExpose;
- (long long)getDynamicCardType;
- (void)createBrandServiceBizWithScene:(long long)a0;
- (void)pause;
- (void)resume;
- (void)notifyStateChangeWithEventName:(id)a0;
- (void)notifyFrameSetInfoWithMsgId:(double)a0 frameSetName:(id)a1 frameSetData:(id)a2;
- (void)destroyBrandServiceBizWithScene:(long long)a0;
- (id)init;

@end
