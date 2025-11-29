@interface FlowKit.MessagingMixContainerMonitorComponent : FlowCommon.TightCouplingComponent <FlowIMX.FlowIMChatServiceDelegate> {
    void /* unknown type, empty encoding */ _cellExposureComponent;
    void /* unknown type, empty encoding */ trackers;
    void /* unknown type, empty encoding */ messageTracker;
    void /* unknown type, empty encoding */ pageTracker;
    void /* unknown type, empty encoding */ exceptionTracker;
}

- (void)messageSendEndWithMessage:(id)a0;
- (void)onTrackerEventWithSendLocalMessageId:(id)a0 event:(id)a1 params:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
