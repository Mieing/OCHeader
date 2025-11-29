@class NSString, BDPObjectReusePool;

@interface BDPRuntimePredefineObject : NSObject <BDPAppPreloadCacheDataSource>

@property (retain, nonatomic) BDPObjectReusePool *runtimePool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (id)getPreloadDataSource;
+ (BOOL)supportPreloadForType:(long long)a0;
+ (void)releaseRuntimeWithIdentifier:(id)a0;
+ (id)sharedObject;

- (void)preloadObjectWithModel:(id)a0 schema:(id)a1 reader:(id)a2 completion:(id /* block */)a3;
- (BOOL)preloadCache:(id)a0 shouldPreloadNextWithExistingObject:(id)a1;
- (void)preloadCache:(id)a0 willReleaseObject:(id)a1;
- (BOOL)preloadDefineFilesEnable;
- (void)clearPreloadDefineFilesForRuntime:(id)a0 completion:(id /* block */)a1;
- (void)preloadCache:(id)a0 willReleaseObject:(id)a1 finish:(id /* block */)a2;
- (long long)getPredefineFileSizeLimitWithType:(long long)a0;
- (id)getRuntimeWithType:(long long)a0 preloadId:(id)a1;
- (void)preloadDefineFilesForRuntime:(id)a0 reader:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
