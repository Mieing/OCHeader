@class BDPSchema, NSMutableDictionary, NSTimer, BDPModel, NSString, NSMutableArray, BDPUniqueID;
@protocol BDPFileHandleProtocol;

@interface BDPAppPreloadCache : NSObject <BDPAppPreloadMessage>

@property (retain, nonatomic) NSMutableDictionary *preloadTasks;
@property (retain, nonatomic) NSMutableArray *preloadLinearOrder;
@property (retain, nonatomic) NSTimer *cleanTimer;
@property (nonatomic) BOOL needPreload;
@property (nonatomic) long long type;
@property (nonatomic) BOOL needLinearPreload;
@property (nonatomic) BOOL isIndependent;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) id<BDPFileHandleProtocol> currentReader;
@property (retain, nonatomic) BDPModel *currentModel;
@property (retain, nonatomic) BDPSchema *currentSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)resumePreload;
+ (void)setupObserver;
+ (void)bootstrapLaunch;
+ (void)receiveMemoryWarningNotification:(id)a0;
+ (id)accessPreloadCacheWithUniqueID:(id)a0;
+ (void)appPreloadHasMetaRequestWithModel:(id)a0 preloadSchemaList:(id)a1 error:(id)a2;
+ (void)appPreloadFinishedWithModel:(id)a0 schema:(id)a1 error:(id)a2;
+ (void)registerDataSourceClass:(Class)a0 withSourceType:(id)a1;
+ (void)removePreloadCacheWithAppID:(id)a0;
+ (BOOL)needLinearPreload;
+ (void)reportCacheClean:(id)a0 withReason:(id)a1;
+ (void)removePreloadCacheWithUniqueID:(id)a0;
+ (id)dataSourceClsMap;
+ (void)triggerNextPreloadWithCurrentCache:(id)a0;
+ (long long)getCacheCountLimit;
+ (void)removeCommonWithUniqueID:(id)a0;
+ (BOOL)pdfPreloadResumeEnable;
+ (BOOL)pdfPreloadResumeEnableWithReason:(id)a0;
+ (BOOL)appHasLaunchedWithUniqueID:(id)a0;
+ (BOOL)canPreloadWithModel:(id)a0;
+ (id)createPreloadCacheIfNeededWithUniqueID:(id)a0 type:(long long)a1;
+ (BOOL)checkIsPreloadDebounceFinish;
+ (void)triggerPreloadWithCache:(id)a0;
+ (BOOL)checkIsOutOfMemoryWithSchema:(id)a0;
+ (void)clearResourceSmoothlyWithReason:(id)a0;
+ (void)removeAllObjectsWithReason:(id)a0;
+ (id)preloadedAppIds;
+ (id)cacheQueue;
+ (id)cacheDict;

- (void)setupCache;
- (id)popObjectWithSourceType:(id)a0;
- (void)setupAllDataSources;
- (void)setupAutoClean;
- (void)preloadTaskFinished:(id)a0;
- (void)linearPreloadTaskList;
- (id)initWithUniqueID:(id)a0 type:(long long)a1 needLinearPreload:(BOOL)a2;
- (void)clearObjectWithSourceType:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
