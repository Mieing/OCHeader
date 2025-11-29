@interface WeChat.MagicCardBizFactoryService : MMUserService <MMServiceProtocol> {
    void /* unknown type, empty encoding */ TAG;
}

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (id)createBizWithBizConfig:(id)a0;
- (id)createBizWithBizConfig:(id)a0 isPreload:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;

@end
