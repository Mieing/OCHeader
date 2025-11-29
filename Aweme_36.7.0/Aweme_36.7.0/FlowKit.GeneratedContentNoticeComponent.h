@interface FlowKit.GeneratedContentNoticeComponent : FlowCommon.TightCouplingComponent <FlowIMX.FlowIMChatServiceDelegate> {
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _hasShownFlowAIContentNoticeSheet;
    void /* unknown type, empty encoding */ sentMessages;
    void /* unknown type, empty encoding */ logger;
}

- (void)messageSendEndWithMessage:(id)a0;
- (void)onReceiveMessagesWithMessages:(id)a0 context:(id)a1;
- (void)onReceiveStreamingMessageWithMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
