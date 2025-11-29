@class NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface LiveStreamLogHelper : NSObject {
    id /* block */ _defaultLogCallback;
    NSMutableArray *_logArray;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _logArrayMutex;
}

@property (nonatomic) long long liveStreamLogFlag;
@property (copy, nonatomic) id /* block */ liveStreamLogCallback;
@property (copy, nonatomic) id /* block */ velivePusherLogCallback;
@property (copy) NSDictionary *basicTraceInfo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) void *LSLogQueueKey;
@property (nonatomic) BOOL enableCommonLog;
@property (nonatomic) int fixFormatLogCrash;
@property (nonatomic) int enableExposeStreamLogCrash;

+ (void)setCpuPerfOptimizeUncertain:(BOOL)a0;
+ (id)getDictionaryFromString:(id)a0;
+ (id)sharedInstance;

- (void)runSyncOnQueue:(id /* block */)a0;
- (void)logKibanaWithKey:(id)a0 dic:(id)a1;
- (void)LiveCoreLogHelperReportLog:(id)a0;
- (id)velivePusherLogFilter:(id)a0;
- (void)logKibanaWithBasicInfoWithLogLevel:(int)a0 tag:(id)a1 event:(id)a2 log:(id)a3;
- (void)logKibanaWithlogLevel:(int)a0 event:(id)a1 log:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)currentTimestamp;

@end
