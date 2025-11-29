@class NSString, RTVQosNode;
@protocol RTVQosMonitorInterface, RxInjector, RTVFeedMonitorInterface;

@interface RTVFeedQosMonitor : NSObject <RTVFeedQosMonitorInterface, RTVFeedContentObserver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) RTVQosNode *feedQosNode;
@property (retain, nonatomic) id<RTVFeedMonitorInterface> feedMonitor;
@property (readonly, nonatomic) id<RTVQosMonitorInterface> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)startFeedQosMonitor:(BOOL)a0;
- (void)pinFeedSessionReady:(id)a0;
- (void)endQosMonitorWithReason:(long long)a0;
- (id)commonMonitorInfo:(id)a0;
- (void).cxx_destruct;

@end
