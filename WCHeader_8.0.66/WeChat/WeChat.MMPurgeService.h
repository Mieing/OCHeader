@interface WeChat.MMPurgeService : MMUserService <MMServiceProtocol> {
    void /* unknown type, empty encoding */ purgers;
}

- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)isMsgPredownloadAndNotPreview:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
