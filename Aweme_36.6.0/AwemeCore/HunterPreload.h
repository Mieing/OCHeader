@class NSObject, NSString, HunterPreloadDetailModel;
@protocol OS_dispatch_queue;

@interface HunterPreload : NSObject <HunterPreloadProtocol>

@property (retain, nonatomic) HunterPreloadDetailModel *preloadDetail;
@property (copy, nonatomic) id /* block */ preloadHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)findPreloadConfigWith:(id)a0 taskConfig:(id)a1 completion:(id /* block */)a2;
+ (id)valueForDynamicKeyPath:(id)a0 object:(id)a1;
+ (void)triggerPrefetchWithSchema:(id)a0;
+ (BOOL)shouldUseHunterPrefetchAPIWithExposure:(BOOL)a0;
+ (id)processPrefetchOrPreloadSchema:(id)a0 queryData:(id)a1;
+ (BOOL)shouldUseHunterPreloadResourceWithExposure:(BOOL)a0;
+ (void)processHunterPreloadConfig:(id)a0 bdxPreloadConfigDict:(id)a1 dynamicCompPreloadArray:(id)a2 xElementPreloadArray:(id)a3 preloadAwemeModels:(id)a4 dataResource:(id)a5 schema:(id)a6;
+ (BOOL)useForestPreload:(id)a0;
+ (void)preloadVideoForModels:(id)a0;
+ (void)preloadVideoWithURL:(id)a0;
+ (void)preloadAlphaVideoWithZipURL:(id)a0;
+ (id)parseJSONData:(id)a0 serializationError:(id *)a1;
+ (id)monitorDict:(id)a0 resourceProvider:(id)a1;
+ (id)monitorDict:(id)a0;
+ (id)encodeURLStringIfNeeded:(id)a0;
+ (unsigned long long)currentTimeInterval;

- (void)prefetchAPIForSchema:(id)a0 queryData:(id)a1;
- (void)prefetchAPIForSchemaConfigs:(id)a0;
- (void)preloadResourceWithSchema:(id)a0 dataResource:(id)a1 completionHandler:(id /* block */)a2;
- (void)prefetchAPIAndPreloadResourceWithSchema:(id)a0 dataResource:(id)a1 queryData:(id)a2 completionHandler:(id /* block */)a3;
- (void)findPreloadConfigWith:(id)a0 taskConfig:(id)a1 completion:(id /* block */)a2;
- (BOOL)useExecuteQueue;
- (void)preloadResourceWithSchema:(id)a0 dataResource:(id)a1 triggerPrefetch:(BOOL)a2 isRecursion:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)handlePreloadConfig:(id)a0 schema:(id)a1 dataResource:(id)a2 triggerPrefetch:(BOOL)a3 isRecursion:(BOOL)a4;
- (void)handleCompletionCallback:(id)a0;
- (void)addPreloadResources:(id)a0;
- (void)updateTotalRecursionCount:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
