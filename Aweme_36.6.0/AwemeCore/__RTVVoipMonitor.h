@class NSString;
@protocol RTVMonitor, RxInjector;

@interface __RTVVoipMonitor : NSObject <RTVJetMonitorProtocol>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVMonitor> rtvMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)monitorService:(id)a0 metric:(id)a1 category:(id)a2;
- (void).cxx_destruct;

@end
