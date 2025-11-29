@interface FlowIMX.CommunicationMessageReceiver : _TtCs12_SwiftObject <FlowIMX.FlowIMConnectionServiceDelegate> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ _recentConvPollingBackoffStrategry;
    void /* unknown type, empty encoding */ _cmdPollingBackoffStrategry;
    void /* unknown type, empty encoding */ pollingTimer;
    void /* unknown type, empty encoding */ receivers;
    void /* unknown type, empty encoding */ fetcher;
}

- (void)onConnectionFailedWithState:(long long)a0 error:(id)a1;
- (void)onChangeConnectionStatusWithState:(long long)a0;
- (void)onChangeReachabilityStatus:(BOOL)a0;

@end
