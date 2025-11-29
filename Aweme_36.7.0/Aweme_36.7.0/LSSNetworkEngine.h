@interface LSSNetworkEngine : NSObject {
    struct shared_ptr<livestrategy::LSNetworkProbeEngine> { struct LSNetworkProbeEngine *__ptr_; struct __shared_weak_count *__cntrl_; } _lsNetWorkProbeEngine;
}

- (void)setTimeThreshold:(long long)a0;
- (void)setPackageSize:(long long)a0;
- (id)initEngineCore;
- (long long)ipv6NetworkReachableProbe:(id)a0 protocol:(id)a1 port:(long long)a2;
- (void)updateProbeParamFromSettings:(id)a0;
- (void)destoryProbe;
- (id)getUdpProbeInfo:(id)a0 ipCount:(long long)a1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

@end
