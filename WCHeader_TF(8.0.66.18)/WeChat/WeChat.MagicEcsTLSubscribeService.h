@interface WeChat.MagicEcsTLSubscribeService : MMUserService <MMServiceProtocol> {
    void /* unknown type, empty encoding */ biz;
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
- (void)destroyBrandServiceBizWithScene:(long long)a0;
- (id)getAppConfigWithBizName:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
