@interface WeChat.MagicSclServiceManager : MMUserService <MMServiceProtocol> {
    void /* unknown type, empty encoding */ sclService;
    void /* unknown type, empty encoding */ sclDelegate;
}

- (id)getSClPublicService;
- (id)createSCLPublicService;
- (void)registerSclDelegateWithBizName:(id)a0 delegate:(id)a1;
- (void)unregisterSclDelegateWithBizName:(id)a0;
- (id)getSclDelegateWithBizName:(id)a0;
- (id)getPkgVersion;
- (id)getPkgInfo;
- (id)init;
- (void).cxx_destruct;

@end
