@interface AWEPaySwiftImpl.CCMShakeHandler : NSObject <AWEMotionItemConfigProtocol> {
    void /* unknown type, empty encoding */ handler;
}

- (id)motionItemConfig;
- (BOOL)enableShake;
- (void)didReceiveShakeEvent:(id)a0 error:(id)a1 from:(id)a2;
- (double)shakeTimeInterval;
- (long long)motionLevel;
- (void).cxx_destruct;
- (id)init;

@end
