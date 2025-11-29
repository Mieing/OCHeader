@interface FlowKit.AppSettingRemoteManager : _TtCs12_SwiftObject <FlowIMX.FlowIMConnectionServiceDelegate> {
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ allConfigs;
    void /* unknown type, empty encoding */ cancellableSet;
    void /* unknown type, empty encoding */ lock;
}

- (void)onConnectionFailedWithState:(long long)a0 error:(id)a1;
- (void)onChangeConnectionStatusWithState:(long long)a0;

@end
