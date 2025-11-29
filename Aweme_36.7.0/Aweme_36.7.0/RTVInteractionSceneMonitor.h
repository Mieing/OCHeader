@class NSString;
@protocol RTVMonitor, RxInjector;

@interface RTVInteractionSceneMonitor : NSObject <RTVPerformanceMonitorDelegate>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) id<RTVMonitor> rtvMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)monitor_reportEnterPersonalPageWithRoomID:(id)a0 success:(BOOL)a1 keyWindowString:(id)a2 topVCString:(id)a3 presentingVCString:(id)a4;
- (void)__hmdTrackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)monitor_stateMachineEventKey:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
