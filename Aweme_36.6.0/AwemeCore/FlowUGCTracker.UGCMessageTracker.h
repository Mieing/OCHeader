@interface FlowUGCTracker.UGCMessageTracker : NSObject <FlowIMX.FlowIMChatServiceDelegate, FlowIMX.FlowIMConversationServiceDelegate> {
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ MaxMessageCacheCount;
    void /* unknown type, empty encoding */ sendMessages;
    void /* unknown type, empty encoding */ generatedMusicContentCache;
    void /* unknown type, empty encoding */ latestSentMessageIds;
    void /* unknown type, empty encoding */ cacheConversation;
}

- (void)messageSendStartWithMessage:(id)a0;
- (void)messageSendEndWithMessage:(id)a0;
- (void)onReceiveStreamingMessagesWithMessages:(id)a0;
- (void)onReceiveFialedWithMessage:(id)a0;
- (void)conversationDidCreateRemote:(id)a0 from:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
