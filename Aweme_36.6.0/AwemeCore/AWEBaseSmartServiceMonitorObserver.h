@protocol FurionSmartServiceMonitor;

@interface AWEBaseSmartServiceMonitorObserver : NSObject <IESFCEventObserver>

@property (weak, nonatomic) id<FurionSmartServiceMonitor> monitor;

- (void)onTriggerEvent:(unsigned long long)a0 params:(id)a1;
- (void).cxx_destruct;

@end
