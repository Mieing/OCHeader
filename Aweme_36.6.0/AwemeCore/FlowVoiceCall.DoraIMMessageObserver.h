@interface FlowVoiceCall.DoraIMMessageObserver : NSObject <FlowIMX.FlowIMChatServiceDelegate> {
    void /* unknown type, empty encoding */ vuiReceivedMessages;
}

- (void)onReceiveMessagesWithMessages:(id)a0 context:(id)a1;
- (void)onReceiveStreamingMessagesWithMessages:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
