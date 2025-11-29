@class NSString, NSMutableDictionary;
@protocol TaskMeassgeProcotol;

@interface HLSLoaderManager : NSObject <TTCMHLSLoaderDelegate, TaskMeassgeProcotol>

@property (retain, nonatomic) NSMutableDictionary *mPreloadUrls;
@property (weak, nonatomic) id<TaskMeassgeProcotol> preloaderDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (BOOL)taskProgress:(id)a0 taskType:(long long)a1 flag:(long long)a2;
- (BOOL)preloadEnd:(id)a0;
- (BOOL)taskOpened:(id)a0 taskType:(long long)a1 info:(id)a2;
- (BOOL)taskFailed:(id)a0 taskType:(long long)a1 error:(id)a2;
- (BOOL)preloadTaskCanceled:(id)a0;
- (BOOL)removeFileCacheByKey:(id)a0;
- (long long)getAllCacheSize;
- (long long)getCacheSizeByKey:(id)a0;
- (id)startHLSPreloadTask:(id)a0 expireTimes:(id)a1;
- (BOOL)_taskStatusChanged:(id)a0 taskType:(long long)a1 obj:(id)a2 status:(unsigned long long)a3;
- (void)hlsLoader:(id)a0 didStartTask:(id)a1 taskType:(long long)a2 info:(id)a3;
- (id)startHLSPreloadTask:(id)a0;
- (void)cancelByKey:(id)a0;
- (void)onProgress:(id)a0 taskType:(long long)a1 flag:(long long)a2;
- (void)removeAllFileCache;
- (void)onCancel:(id)a0;
- (void)onCompleted:(id)a0;
- (void)onError:(id)a0 taskType:(long long)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasKey:(id)a0;
- (void)cancelAll;

@end
