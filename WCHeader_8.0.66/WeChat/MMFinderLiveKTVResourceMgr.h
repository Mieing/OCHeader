@class NSMutableArray, MMLiveResourceFetcherFanoutFlowAction, MMLiveKtvThemeRepository, NSMutableDictionary, NSString, OrderedDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MMFinderLiveKTVResourceMgr : MMUserService <MMFinderLiveKTVManageExt, WCFinderLiveExt, MMServiceProtocol>

@property (retain, nonatomic) MMLiveResourceFetcherFanoutFlowAction *downloadMgr;
@property (retain, nonatomic) OrderedDictionary *songBasicInfoDic;
@property (retain, nonatomic) OrderedDictionary *songResourceInfoDic;
@property (retain, nonatomic) MMLiveKtvThemeRepository *themeRepository;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lyricNoteResProcessQueue;
@property (retain, nonatomic) NSMutableDictionary *loadingTaskDict;
@property (retain, nonatomic) NSMutableDictionary *realTaskDict;
@property (retain, nonatomic) NSMutableArray *indexUsed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)checkSongResourceTypes:(id)a0 liveTask:(id)a1;
+ (id)createTaskKeyWithSong:(id)a0 songResourceTypes:(unsigned long long)a1 taskId:(id)a2;

- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)clearData;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (id)resourcePath:(id)a0 type:(unsigned int)a1;
- (BOOL)checkResource:(id)a0;
- (BOOL)checkSong:(id)a0 resourceExist:(unsigned int)a1;
- (BOOL)checkSongLyricNoteResExist:(id)a0;
- (BOOL)isResTypeNecessary:(unsigned int)a0 songResourceTypes:(unsigned long long)a1;
- (BOOL)isResTypeSourcedFromCdn:(unsigned int)a0;
- (void)preloadKsResourceForSongItemsIfNeed:(id)a0 source:(long long)a1 taskId:(id)a2;
- (id)createDownloadTaskForSongItem:(id)a0 songResourceTypes:(unsigned long long)a1;
- (void)checkResourceInfo:(id)a0 requireSongResTypes:(unsigned long long)a1 taskId:(id)a2 completeBlock:(id /* block */)a3;
- (void)loadResourceInfoIfNeed:(id)a0;
- (void)fetchResourceInfo:(id)a0 requireSongResTypes:(unsigned long long)a1 taskId:(id)a2 completeBlock:(id /* block */)a3;
- (void)getResourceInfo:(id)a0 taskId:(id)a1 cacheInfo:(BOOL)a2 completeBlock:(id /* block */)a3;
- (void)saveQrcLyricAndNoteAsync:(id)a0 force:(BOOL)a1 completion:(id /* block */)a2;
- (id)createFetcherTasksForCdnResourcesInTask:(id)a0;
- (void)cacheSongBasicInfo:(id)a0 uniqueId:(id)a1;
- (id)getSongBasicInfoWithUId:(id)a0;
- (void)checkSongBasicCacheOverLimit;
- (void)cacheSongResourceInfo:(id)a0 songId:(id)a1;
- (id)getSongResourceInfo:(id)a0;
- (void)checkSongResourceCacheOverLimit;
- (BOOL)tryEnqueueLoadTaskWithSong:(id)a0 songResourceTypes:(unsigned long long)a1 taskId:(id)a2;
- (BOOL)outQueueLoadTaskWithSong:(id)a0 songResourceTypes:(unsigned long long)a1 taskId:(id)a2;
- (BOOL)outQueueLoadTaskWithTaskKey:(id)a0;
- (id)createResLoadTaskWithTaskKey:(id)a0;
- (id)getLiveTask:(id)a0;
- (void)loadKsResource:(id)a0 requireSongResTypes:(unsigned long long)a1 taskId:(id)a2;
- (void)loadKsBasicInfo:(id)a0 taskId:(id)a1 forceUpdate:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchThemeWithId:(id)a0 fetchingProvider:(id)a1 completionBlock:(id /* block */)a2;
- (void)fetchAllThemesWithFetchingProvider:(id)a0 completionBlock:(id /* block */)a1;
- (void)loadThemeResource:(id)a0 completionBlock:(id /* block */)a1;
- (void)loadResourcesForTheme:(id)a0 completionBlock:(id /* block */)a1;
- (void)assignPriorityWithSongId:(id)a0 onTop:(BOOL)a1;
- (void)onFetcherTaskCreateWithSongId:(id)a0 tasks:(id)a1;
- (void)onFetcherTaskDoneWithSongId:(id)a0;
- (void)notifyResourcesLoadResultForTask:(id)a0 success:(BOOL)a1 taskId:(id)a2;
- (void)onLiveKTVPendingSongItemsUpdate:(id)a0 source:(long long)a1 taskId:(id)a2;
- (void)onLiveKTVFirstSongVersionUpdate:(unsigned int)a0 pendingSongs:(id)a1 source:(long long)a2 taskId:(id)a3;
- (void)onKtvSongModSuccessNotification:(int)a0 songItem:(id)a1 taskId:(id)a2;
- (void)onKtvSongListChangeNotification:(id)a0 fromUser:(id)a1 taskId:(id)a2;
- (void).cxx_destruct;

@end
