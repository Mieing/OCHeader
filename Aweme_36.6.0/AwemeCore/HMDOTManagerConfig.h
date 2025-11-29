@class NSLock;

@interface HMDOTManagerConfig : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _memoryCacheOverCallbackRWLock;
}

@property (retain, nonatomic) NSLock *intervalLock;
@property (nonatomic) double lastInvokeCallbackTime;
@property (nonatomic) BOOL enableCacheUnHitLog;
@property (nonatomic) long long maxCacheFileSize;
@property (nonatomic) int maxMemoryCacheCount;
@property (nonatomic) int memoryCacheOverCallbackInvokeInterval;
@property (copy, nonatomic) id /* block */ memoryCacheOverCallBack;

+ (id)defaultConfig;

- (void)invokeMemoryCacheCallback;
- (id)GetEnableCacheUnHitLogStrValue;
- (void).cxx_destruct;
- (id)init;

@end
