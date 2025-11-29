@interface WeChat.MagicCardFlutterStarterService : MMUserService <MMServiceProtocol> {
    void /* unknown type, empty encoding */ TAG;
    void /* unknown type, empty encoding */ engine2BizContext;
}

- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)createServiceBizWithBizName:(id)a0 flutterEngine:(id)a1 jsapiList:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
