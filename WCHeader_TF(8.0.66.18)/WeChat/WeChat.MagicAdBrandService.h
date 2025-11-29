@interface WeChat.MagicAdBrandService : WeChat.MagicBrandBaseService {
    void /* unknown type, empty encoding */ brandTimelineOpened;
}

- (BOOL)isBrandTimelineOpen;
- (BOOL)shouldPreLayoutWhenExpose;
- (long long)getDynamicCardType;
- (void)createBrandServiceBizWithScene:(long long)a0;
- (void)pause;
- (void)resume;
- (void)notifyStateChangeWithEventName:(id)a0;
- (void)notifyFrameSetInfoWithMsgId:(double)a0 frameSetName:(id)a1 frameSetData:(id)a2;
- (void)notifyAdServerInfoEventWithFeedsType:(long long)a0 adInfo:(id)a1;
- (void)notifyResortStatusWithTaskId:(long long)a0 scene:(long long)a1 event:(id)a2 bizTLResortEventInfo:(id)a3;
- (void)testJsWithTestJs:(id)a0;
- (void)destroyBrandServiceBizWithScene:(long long)a0;
- (id)init;

@end
