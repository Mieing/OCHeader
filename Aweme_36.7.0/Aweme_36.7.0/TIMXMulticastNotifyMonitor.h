@class NSString, TIMXSDKInstance;

@interface TIMXMulticastNotifyMonitor : NSObject <TIMXMulticastInvocationTrackDelegate, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) double reportRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackDBNotifyWithUpdate:(id)a0 methodName:(id)a1;
- (BOOL)shouldRecordTheInvocation;
- (void)trackInvocationWithMethod:(id)a0 timeConsumption:(double)a1 notifiedNodeCount:(long long)a2;
- (void)p_printLocalDBUpdateLog:(id)a0 methodName:(id)a1;
- (BOOL)p_isSamplingHit;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
