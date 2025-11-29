@class NSArray, NSMutableDictionary, NSString;

@interface AWERecordResourcePreloadManager : NSObject <AWEStudioRecordResourcePreloadManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *taskQueue;
@property (retain, nonatomic) NSArray *allEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearAllResourceDownloadTask;
+ (void)effectResourcePreloadWithIds:(id)a0 effects:(id)a1 requestExtraParam:(id)a2;
+ (void)musicResourcePreloadWithId:(id)a0 music:(id)a1;
+ (void)executeRecordMusicProcessTaskWithExtraParam:(id)a0;
+ (void)musicResourcePreloadWithId:(id)a0 music:(id)a1 extraRequestParams:(id)a2;
+ (BOOL)enableRecordBeautyOpt;
+ (void)executeRecordBeautyOptTask:(id)a0;
+ (void)preloadCreateCameraInstanceIfNeed;
+ (void)executeRecordEffectProcessTask;
+ (id)resourceResultHandler;
+ (BOOL)checkHasEffectResourceTaskWithEffectId:(id)a0;
+ (BOOL)checkHasMusicResourceTaskWithMusicId:(id)a0;
+ (id)defaultManager;

- (id)taskWithKey:(id)a0;
- (void)removeTaskQueueWithKey:(id)a0;
- (id)recordNormalResourceAsyncHandler;
- (id)createDownloadTaskWithType:(unsigned long long)a0 resourceModel:(id)a1 completion:(id /* block */)a2;
- (void)removeAllTaskQueue;
- (void)saveTaskQueueWithKey:(id)a0 task:(id)a1;
- (void).cxx_destruct;

@end
