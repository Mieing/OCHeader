@interface FlowIMX.PerfMonitor : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ trackConfig;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ thermalState;
    void /* unknown type, empty encoding */ isLowPowerModeEnabled;
}

- (void)deviceTheramlStateDidChange:(id)a0;
- (void)powerStateDidChange:(id)a0;

@end
