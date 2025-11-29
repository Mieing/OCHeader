@class HMDTTMonitor, NSString, HMDUserExceptionTracker;
@protocol RxInjector;

@interface RTVMonitor : NSObject <RTVMonitor>

@property (readonly, nonatomic) HMDTTMonitor *xrtcMonitor;
@property (readonly, nonatomic) HMDUserExceptionTracker *exceptionMonitor;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)trackUserExceptionWithExceptionType:(id)a0 title:(id)a1 subTitle:(id)a2 customParams:(id)a3 filters:(id)a4 callback:(id /* block */)a5;
- (void)trackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)trackUserExceptionWithExceptionType:(id)a0 customParams:(id)a1 filters:(id)a2 callback:(id /* block */)a3;
- (id)__createXRTCMonitor;
- (void).cxx_destruct;

@end
