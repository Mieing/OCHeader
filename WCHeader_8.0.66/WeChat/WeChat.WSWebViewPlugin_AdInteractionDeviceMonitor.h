@interface WeChat.WSWebViewPlugin_AdInteractionDeviceMonitor : WSWebViewPluginBase <WCAdInteractionDeviceMotionContainerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_monitor;
    void /* unknown type, empty encoding */ amplitude;
}

- (void)handleEvent:(id)a0 userInfo:(id)a1;
- (void)deviceMotionAccelerationChangedWithX:(double)a0 y:(double)a1 z:(double)a2;
- (id)init;
- (void).cxx_destruct;

@end
