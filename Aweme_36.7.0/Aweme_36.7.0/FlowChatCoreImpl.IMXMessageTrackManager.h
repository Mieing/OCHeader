@interface FlowChatCoreImpl.IMXMessageTrackManager : NSObject <FlowIMX.FlowIMChatServiceDelegate, FlowIMX.FlowIMConversationServiceDelegate> {
    void /* unknown type, empty encoding */ sessionTrackers;
    void /* unknown type, empty encoding */ receivedMessageMap;
    void /* unknown type, empty encoding */ currentTrackData;
    void /* unknown type, empty encoding */ currentSender;
    void /* unknown type, empty encoding */ _settingsProvider;
}

- (void)conversationDidCreateRemote:(id)a0 from:(id)a1;
- (void)messageSendEndWithMessage:(id)a0;
- (void)onReceiveMessagesWithMessages:(id)a0 context:(id)a1;
- (void)onReceiveStreamingMessageWithMessage:(id)a0;
- (void)messageReplyEndWithMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
