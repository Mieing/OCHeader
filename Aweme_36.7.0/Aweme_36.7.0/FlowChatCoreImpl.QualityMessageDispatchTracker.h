@interface FlowChatCoreImpl.QualityMessageDispatchTracker : NSObject <FlowIMX.FlowIMConnectionServiceDelegate, FlowIMX.FlowIMChatServiceDelegate> {
    void /* unknown type, empty encoding */ storage;
    void /* unknown type, empty encoding */ continuousSendFailureTimes;
    void /* unknown type, empty encoding */ sendFailureTimestamp;
    void /* unknown type, empty encoding */ imConnectionState;
    void /* unknown type, empty encoding */ currentActiveConversationId;
    void /* unknown type, empty encoding */ isTypewritterOnMap;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _reachability;
    void /* unknown type, empty encoding */ listeners;
}

- (void)onConnectionFailedWithState:(long long)a0 error:(id)a1;
- (void)onChangeConnectionStatusWithState:(long long)a0;
- (void)messageSendEndWithMessage:(id)a0;
- (void)onReceiveMessagesWithMessages:(id)a0 context:(id)a1;
- (void)onReceiveStreamingMessageWithMessage:(id)a0;
- (void)messageReplyEndWithMessage:(id)a0;
- (void)onReceiveFialedWithMessage:(id)a0;
- (void)onTrackerEventWithSendLocalMessageId:(id)a0 event:(id)a1 params:(id)a2;
- (void)handleEnterBackgroud:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
