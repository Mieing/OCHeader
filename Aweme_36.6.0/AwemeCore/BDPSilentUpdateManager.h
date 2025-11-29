@class NSRecursiveLock, NSMutableDictionary, BDPThreadSafeDictionary, BDPQueue, NSString;

@interface BDPSilentUpdateManager : NSObject <BDPAppLoadTaskDataSource>

@property (retain, nonatomic) NSMutableDictionary *infoDict;
@property (retain, nonatomic) BDPQueue *silentUpdateInfoQueue;
@property (retain, nonatomic) BDPThreadSafeDictionary *appColdLaunchTimeDict;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) double lastRequestTime;
@property (nonatomic) double lastGameRequestTime;
@property (weak, nonatomic) id requestToken;
@property (weak, nonatomic) id gameRequestToken;
@property (weak, nonatomic) id observerToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (void)updateRelativeDataIfNeed;
+ (void)bootstrapLaunch;
+ (id)sharedManager;

- (void)setupObserver;
- (id)getNextTask;
- (void)tryEnqueueTask:(id)a0;
- (void)clearAllTasks;
- (void)silentPredownloadApp:(id)a0 type:(long long)a1 batchMetaResponseBlock:(id /* block */)a2;
- (void)updateRecentUsedAppSilently;
- (void)hg_updateRecentUsedAppSilently;
- (void)silentPreupdateApp:(id)a0 type:(long long)a1 batchMetaResponseBlock:(id /* block */)a2;
- (void)updateSilenceUpdateMetaWithMetaDict:(id)a0 appIds:(id)a1 type:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (long long)count;

@end
