@class NSString, NSDictionary, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue, TIMXAppDoubleTrackerManagerProtocol, TIMXInstanceDispatchQueuePoolProtocol;

@interface TIMXDatabaseTracker : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) id<TIMXAppDoubleTrackerManagerProtocol> tracker;
@property (retain, nonatomic) id<TIMXInstanceDispatchQueuePoolProtocol> queuePool;
@property (copy, nonatomic) NSDictionary *ftcValues;
@property (readonly, nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } ftcValuesRWLock;
@property (nonatomic) int remoteDefaultFTCValue;
@property (nonatomic) BOOL isFirstLoad;
@property (readonly, nonatomic) BOOL enableTrace;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *trackerQueue;
@property (nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleApplicationDidBecomeActiveNotification;
- (void)handleApplicationWillResignActiveNotification;
- (void)traceThreadWithScene:(id)a0 params:(id)a1;
- (id)infoWithDiskAndDatabase:(id)a0;
- (void)p_traceCmdTagStage:(struct TIMXCMDIDENTIFY { unsigned int x0; unsigned long long x1; unsigned int x2; BOOL x3; } *)a0 timeBegin:(unsigned long long)a1 status:(int)a2 params:(id)a3;
- (float)performanceTraceEnd:(unsigned long long)a0;
- (BOOL)p_should_launch_mark;
- (BOOL)p_should_trace:(struct TIMXCMDIDENTIFY { unsigned int x0; unsigned long long x1; unsigned int x2; BOOL x3; } *)a0;
- (float)p_performance_trace_end:(unsigned long long *)a0 unit:(unsigned long long)a1;
- (float)fileSizeWithPath:(id)a0;
- (void)databaseSetup:(unsigned long long)a0 params:(id)a1 path:(id)a2;
- (void)databaseRepairStatus:(BOOL)a0 params:(id)a1;
- (void)traceDatabaseGlobalErrorWithParams:(id)a0;
- (void)traceCmdTag:(struct TIMXCMDIDENTIFY { unsigned int x0; unsigned long long x1; unsigned int x2; BOOL x3; } *)a0 timeBegin:(unsigned long long)a1;
- (void)traceCmdTag:(struct TIMXCMDIDENTIFY { unsigned int x0; unsigned long long x1; unsigned int x2; BOOL x3; } *)a0 timeBegin:(unsigned long long)a1 count:(int)a2;
- (void)traceCmdTag:(struct TIMXCMDIDENTIFY { unsigned int x0; unsigned long long x1; unsigned int x2; BOOL x3; } *)a0 timeBegin:(unsigned long long)a1 status:(int)a2;
- (void)traceCmdTag:(struct TIMXCMDIDENTIFY { unsigned int x0; unsigned long long x1; unsigned int x2; BOOL x3; } *)a0 timeBegin:(unsigned long long)a1 status:(int)a2 count:(int)a3;
- (void)traceCmdTagStage:(struct TIMXCMDIDENTIFY { unsigned int x0; unsigned long long x1; unsigned int x2; BOOL x3; } *)a0 timeBegin:(unsigned long long)a1 status:(int)a2 params:(id)a3;
- (void)traceThreadWithScene:(id)a0;
- (unsigned long long)performanceTraceBegin;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
