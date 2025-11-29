@interface WeChat.MagicBrandBaseService : MMUserService <MMServiceProtocol> {
    void /* unknown type, empty encoding */ brandServiceBiz;
    void /* unknown type, empty encoding */ cardHeightCachedMMKV;
}

- (void)onServiceClearData;
- (void)onServiceInit;
- (BOOL)shouldPreLayoutWhenExpose;
- (long long)getDynamicCardType;
- (void)createBrandServiceBizWithScene:(long long)a0;
- (void)recreateBrandServiceBizWithScene:(long long)a0;
- (void)pause;
- (void)resume;
- (void)notifyStateChangeWithEventName:(id)a0;
- (void)notifyFrameSetInfoWithMsgId:(double)a0 frameSetName:(id)a1 frameSetData:(id)a2;
- (void)requestPreLayoutWhenExposeWithStrategy:(long long)a0;
- (void)destroyBrandServiceBizWithScene:(long long)a0;
- (id)getAppConfigWithBizName:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
