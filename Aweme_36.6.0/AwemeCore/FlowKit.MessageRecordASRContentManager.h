@interface FlowKit.MessageRecordASRContentManager : NSObject <FlowIMX.FlowIMConversationServiceDelegate, FlowIMX.FlowIMChatServiceDelegate> {
    void /* unknown type, empty encoding */ _streamingASRContent;
}

- (void)conversationHistoryDidClear:(id)a0;
- (void)onReceiveMessagesWithMessages:(id)a0 context:(id)a1;
- (void)onReceiveChunkedMessageWithMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
