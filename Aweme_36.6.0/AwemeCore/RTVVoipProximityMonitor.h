@class NSString, RxMultipleDelegate;
@protocol RTVVoipProximityMonitorDelegate;

@interface RTVVoipProximityMonitor : NSObject <RTVVoipProximityMonitorInterface>

@property (readonly, nonatomic) RxMultipleDelegate<RTVVoipProximityMonitorDelegate> *multipleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)activeProximityMonitoringWithObserver:(id)a0;
- (id)deactiveProximityMonitoringWithObserver:(id)a0;
- (void)proximityMonitorStateChangeNotification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
