@interface WeChat.WeCoinConsumeLogic : NSObject <WCCoinConsumeLogicDelegate> {
    void /* unknown type, empty encoding */ continuation;
}

- (id)init;
- (void)consumeDidSuccess:(id)a0 result:(id)a1;
- (void)consumeDidFail:(id)a0 error:(id)a1;
- (void)consumeDidCancel:(id)a0;
- (void).cxx_destruct;

@end
