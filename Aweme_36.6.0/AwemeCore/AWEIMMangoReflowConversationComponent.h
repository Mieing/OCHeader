@interface AWEIMMangoReflowConversationComponent : AWEIMComponentBase <AWEIMMessageListEnterChatSubscriberProtocol> {
    void /* unknown type, empty encoding */ reflowInfo;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)messageListEnterChatRequestParamsForRequestSource:(long long)a0;
- (void)updateMessageListEnterChatData:(id)a0 requestSource:(long long)a1;
- (id)appendEnterChatTrackParamsWithRequestSource:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
