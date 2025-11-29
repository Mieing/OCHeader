@interface AWEIMIncentiveChatInfoOtherObserverComponent : AWEIMComponentBase <AWEIMConversationInfoOtherSubscriberProtocol> {
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ needTrackWhenDeinit;
}

- (void)componentDidMounted:(id)a0;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
