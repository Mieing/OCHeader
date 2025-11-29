@class MMLRUCache, NSString, NSURLSessionDownloadTask, NSMutableArray;

@interface MJTemplateService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MMLRUCache *templateCacheFromSvr;
@property (retain, nonatomic) MMLRUCache *templateCacheFromSDK;
@property (retain, nonatomic) MMLRUCache *templateListOfSceneCacheFromSvr;
@property (copy, nonatomic) NSString *currentCameraTemplatePreloadTaskId;
@property (retain, nonatomic) NSURLSessionDownloadTask *currentTemplateDownloadTask;
@property (retain, nonatomic) NSMutableArray *taskQueue;
@property (retain, nonatomic) NSMutableArray *highPriorityTaskQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localPathWithUrl:(id)a0;
+ (id)_cachePreviewFilePathFromUrlStr:(id)a0;

- (void)getTemplateResourceWithScene:(unsigned long long)a0 successful:(id /* block */)a1 failed:(id /* block */)a2;
- (void)startDownloadMaterialResource:(id)a0 successful:(id /* block */)a1;
- (void)downloadPreviewAnimForCache:(id)a0 completion:(id /* block */)a1;
- (void)preloadCameraTemplateResourceIfNeeded:(id)a0;
- (void)preloadCameraTemplateResourceIfNeeded:(id)a0 isHighPriority:(BOOL)a1;
- (void)_startPreloadTemplateResouceWithTemplateInfo:(id)a0 isHighPriority:(BOOL)a1;
- (void)_safeAddTask:(id)a0 inQueue:(id)a1;
- (void)removeTask:(id)a0;
- (void)checkQueue;
- (BOOL)checkHasPreloadTemplateResourceWithTemplateItem:(id)a0;
- (BOOL)checkHasPreloadTemplateResourceWithTemplateInfo:(id)a0;
- (BOOL)checkTemplateResourceHasResignToMaasSDK:(id)a0;
- (void)registerTemplateResourceToMaasSDKWithTemplateInfo:(id)a0 localPath:(id)a1;
- (void)cancelAllTemplateResourceDownloadTask;
- (void)resumeAllTemplateResourceDownloadTask;
- (void)finderMediaVideoDownloadQueueChange;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)fetchTemplateListWithPreviousPageBuffer:(id)a0 options:(id)a1 successBlock:(id /* block */)a2 failureBlock:(id /* block */)a3;
- (void)fetchTemplateInfoWithID:(id)a0 type:(unsigned long long)a1 scene:(unsigned long long)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4;
- (void)fetchTemplateInfoWithID:(id)a0 type:(unsigned long long)a1 scene:(unsigned long long)a2 notUseCache:(BOOL)a3 successBlock:(id /* block */)a4 failureBlock:(id /* block */)a5;
- (void)fetchTemplateInfoWithShortURL:(id)a0 type:(unsigned long long)a1 scene:(unsigned long long)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4;
- (void)getCameraVideoTemplateListWithPagebuf:(id)a0 scene:(unsigned long long)a1 finderUserName:(id)a2 successfulBlock:(id /* block */)a3 failedBlock:(id /* block */)a4;
- (void)getCameraVideoTemplateListWithPagebuf:(id)a0 scene:(unsigned long long)a1 finderUserName:(id)a2 preFetchType:(unsigned long long)a3 optionalParams:(id)a4 successfulBlock:(id /* block */)a5 failedBlock:(id /* block */)a6;
- (void)getImageTemplateListWithPagebuf:(id)a0 scene:(unsigned long long)a1 finderUserName:(id)a2 preFetchType:(unsigned long long)a3 successfulBlock:(id /* block */)a4 failedBlock:(id /* block */)a5;
- (id)getCachedCameraVideoTemplateList;
- (BOOL)getCachedShouldLandOnEmptyTemplate;
- (void)getFavTemplateListWithPageBuf:(id)a0 preFetchType:(unsigned long long)a1 finderUserName:(id)a2 successfulBlock:(id /* block */)a3 failedBlock:(id /* block */)a4;
- (id)templateKeyWithTemplateId:(id)a0 type:(unsigned long long)a1;
- (id)templateCachedFromSvrForTemplateId:(id)a0 type:(unsigned long long)a1;
- (void)updateTemplateFromSvrCached:(id)a0 withTemplateId:(id)a1 type:(unsigned long long)a2;
- (id)templateCachedFromSDKForTemplateId:(id)a0;
- (void)updateTemplateFromSDKCached:(id)a0 withTemplateId:(id)a1;
- (id)availableTemplateSvrDataCacheOfScene:(unsigned long long)a0;
- (void)updateTemplateListSvrDataCacheWithTemplateList:(id)a0 categoryList:(id)a1 pageBuffer:(id)a2 validityTerm:(unsigned int)a3 forScene:(unsigned long long)a4;
- (void)requestILinkAuthorizationWithSuccessBlock:(id /* block */)a0 failureBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
