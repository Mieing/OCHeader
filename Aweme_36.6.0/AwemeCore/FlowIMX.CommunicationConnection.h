@interface FlowIMX.CommunicationConnection : _TtCs12_SwiftObject <FlowIMX.FlowIMConnectionServiceReceiver> {
    void /* unknown type, empty encoding */ receivedQueue;
    void /* unknown type, empty encoding */ receivers;
    void /* unknown type, empty encoding */ _uplinkMsgMap;
    void /* unknown type, empty encoding */ _timeoutTimerMap;
    void /* unknown type, empty encoding */ tracker;
}

- (void)onMessageReceivedWithMessage:(id)a0;

@end
