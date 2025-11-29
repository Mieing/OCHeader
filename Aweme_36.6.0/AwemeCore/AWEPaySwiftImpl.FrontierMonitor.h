@interface AWEPaySwiftImpl.FrontierMonitor : NSObject <IESLCConnectService> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ lastConnectedTimestamp;
    void /* unknown type, empty encoding */ lastFailTimestamp;
    void /* unknown type, empty encoding */ lastDisconnectTimestamp;
}

- (void)ieslc_onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (id)init;

@end
