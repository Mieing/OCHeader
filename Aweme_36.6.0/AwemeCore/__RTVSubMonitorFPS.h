@class HMDFPSMonitor, NSMutableArray, NSDictionary;
@protocol RxInjector;

@interface __RTVSubMonitorFPS : __RTVSubMonitorBase {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex_lock;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) HMDFPSMonitor *fpsMonitor;
@property (readonly, nonatomic) NSMutableArray *records;
@property (nonatomic) BOOL startup;
@property (readonly, copy, nonatomic) NSDictionary *fpsSettings;
@property (readonly, copy, nonatomic) id /* block */ callback;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (id)fetchCurrentUtilization:(BOOL)a0;
- (void)startSubMonitor;
- (void)stopSubMonitor;
- (void)pauseSubMonitor;
- (void)resumeSubMonitor;
- (unsigned long long)supportAggReasons;
- (BOOL)isEvaluationMonitor;
- (id)__fetchRecord;
- (void)__setupFPSMonitor;
- (double)__fpsInterval;
- (void)__startSubMonitor;
- (void)__stopSubMonitorIfNeeded;
- (void)__pauseSubMonitorIfNeeded;
- (void)__resumeSubMonitor;
- (void).cxx_destruct;
- (void)dealloc;

@end
