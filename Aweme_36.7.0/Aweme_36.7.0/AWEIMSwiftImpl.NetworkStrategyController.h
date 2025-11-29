@interface AWEIMSwiftImpl.NetworkStrategyController : HTSService <AWEIMNetworkStrategyControllerProtocol> {
    void /* unknown type, empty encoding */ firstFrameStrategy;
    void /* unknown type, empty encoding */ environmentMapper;
}

- (void)onServiceInit;
- (BOOL)isNeedDelaySendRequestWithPath:(id)a0;
- (double)delayDurationWithPath:(id)a0;
- (void)updateEnvironmentValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
