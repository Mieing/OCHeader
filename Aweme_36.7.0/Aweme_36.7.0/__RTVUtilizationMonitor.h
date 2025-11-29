@class NSString, NSTimer, NSMutableArray, NSNumber;
@protocol RTVMonitor, RTVMultipleDelegateInterface, RxInjector, RTVUtilizationMonitorDelegate;

@interface __RTVUtilizationMonitor : NSObject <RTVUtilizationMonitor, RTVSubMonitorDelegate>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) NSMutableArray *subMonitors;
@property (readonly, nonatomic) id<RTVMonitor> rtvMonitor;
@property (readonly, nonatomic) NSTimer *timer;
@property (readonly, nonatomic) NSNumber *timeInterval;
@property (nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) id<RTVMultipleDelegateInterface, RTVUtilizationMonitorDelegate> multipleDelegate;
@property (weak, nonatomic) id<RTVUtilizationMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)triggerMonitorWithReason:(id)a0;
- (void)pauseMonitor;
- (void)resumeMonitor;
- (id)initWithSubMonitors:(id)a0 context:(id)a1;
- (void)__enumerateSubMonitors:(id /* block */)a0;
- (void)__markRunning:(BOOL)a0;
- (id)__aggMonitorDictWithReason:(unsigned long long)a0;
- (void)__trackWithDict:(id)a0 suffix:(id)a1;
- (void)__startMonitor;
- (void)__stopMonitor;
- (void)__pauseMonitor;
- (void)__resumeMonitor;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startMonitor;
- (void)stopMonitor;

@end
