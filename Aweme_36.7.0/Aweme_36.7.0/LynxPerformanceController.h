@class NSString;
@protocol LynxServiceEventReporterProtocol, LynxPerformanceObserverProtocol;

@interface LynxPerformanceController : NSObject <LynxTimingCollectorProtocol, LynxMemoryMonitorProtocol, LynxPerformanceObserverProtocol> {
    struct weak_ptr<lynx::shell::LynxActor<lynx::tasm::performance::PerformanceController>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _nativeWeakActorPtr;
    id<LynxServiceEventReporterProtocol> _reporter;
}

@property (readonly, weak, nonatomic) id<LynxPerformanceObserverProtocol> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMemoryMonitorEnabled;

- (void)onPerformanceEvent:(id)a0;
- (void)ActAsync:(id /* block */)a0;
- (void)setTiming:(unsigned long long)a0 key:(id)a1 pipelineID:(id)a2;
- (void)markTiming:(id)a0 pipelineID:(id)a1;
- (void)resetTimingBeforeReload;
- (void)onPipelineStart:(id)a0 pipelineOrigin:(id)a1 timestamp:(unsigned long long)a2;
- (void)allocateMemory:(id /* block */)a0;
- (void)deallocateMemory:(id /* block */)a0;
- (void)updateMemoryUsage:(id /* block */)a0;
- (void)updateMemoryUsageWithRecords:(id)a0;
- (void)setNativeActor:(const void *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithObserver:(id)a0;

@end
