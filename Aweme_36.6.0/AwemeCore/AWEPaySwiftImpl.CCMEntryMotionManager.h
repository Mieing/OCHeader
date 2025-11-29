@interface AWEPaySwiftImpl.CCMEntryMotionManager : AWEBaseController <AWEMotionItemConfigProtocol, AWEYAPTransportComponentProtocol> {
    void /* unknown type, empty encoding */ bridgeSubscriberList;
    void /* unknown type, empty encoding */ shakeSubscriber;
    void /* unknown type, empty encoding */ hadRegisterMotion;
}

- (id)motionItemConfig;
- (BOOL)enableShake;
- (void)didReceiveShakeEvent:(id)a0 error:(id)a1 from:(id)a2;
- (double)shakeTimeInterval;
- (long long)motionLevel;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;

@end
