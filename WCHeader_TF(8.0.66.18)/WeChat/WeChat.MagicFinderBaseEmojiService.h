@interface WeChat.MagicFinderBaseEmojiService : MMUserService <MMServiceProtocol, WeChat.IMagicFinderEmojiService> {
    void /* unknown type, empty encoding */ emojiBiz;
    void /* unknown type, empty encoding */ delegate;
}

- (void)onServiceClearData;
- (void)onServiceInit;
- (void)createBizWithDelegate:(id)a0;
- (BOOL)triggerEmojiWithScene:(long long)a0 ID:(id)a1 handler:(id)a2;
- (void)destroyBiz;
- (id)init;
- (void).cxx_destruct;

@end
