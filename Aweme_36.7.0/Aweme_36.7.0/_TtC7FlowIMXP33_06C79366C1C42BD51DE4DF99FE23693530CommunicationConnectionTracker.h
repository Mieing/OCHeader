@interface _TtC7FlowIMXP33_06C79366C1C42BD51DE4DF99FE23693530CommunicationConnectionTracker : _TtCs12_SwiftObject <FlowIMX.FlowIMConnectionServiceDelegate> {
    void /* unknown type, empty encoding */ isConnected;
    void /* unknown type, empty encoding */ notificationHandlers;
    void /* unknown type, empty encoding */ beginTime;
}

- (void)onConnectionFailedWithState:(long long)a0 error:(id)a1;
- (void)onChangeConnectionStatusWithState:(long long)a0;

@end
