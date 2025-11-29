@interface AWEIMConversationGroupChainsComponent : AWEIMComponentBase <AWEIMGroupChainsInterface, AWEIMMessageListDataAction> {
    void /* unknown type, empty encoding */ chainsLastTimeMap;
    void /* unknown type, empty encoding */ tailShowSet;
    void /* unknown type, empty encoding */ allDisplayMessageSet;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)updateLastTime:(id)a0;
- (BOOL)isExpiredGroupChains:(id)a0;
- (void)updateTailShowMessageSet:(id)a0;
- (BOOL)judgeTailHasShowed:(id)a0;
- (void)updateFoldStatusSet:(id)a0;
- (BOOL)isNeedDisplayAll:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)didReceiveSendMessageResponse:(id)a0 message:(id)a1 result:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
