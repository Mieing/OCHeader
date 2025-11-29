@class NSString;

@interface BDPAppConfigPreloader : NSObject <BDPAppPreloadCacheDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (id)getPreloadDataSource;
+ (BOOL)supportPreloadForType:(long long)a0;
+ (id)sharedManager;

- (void)preloadObjectWithModel:(id)a0 schema:(id)a1 reader:(id)a2 completion:(id /* block */)a3;
- (BOOL)preloadCache:(id)a0 shouldPreloadNextWithExistingObject:(id)a1;
- (void)preloadCache:(id)a0 willReleaseObject:(id)a1;

@end
