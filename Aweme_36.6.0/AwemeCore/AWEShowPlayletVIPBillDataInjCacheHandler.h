@class NSString;

@interface AWEShowPlayletVIPBillDataInjCacheHandler : NSObject <AWEShowDataInjCacheHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActiveWithController:(id)a0;

- (id)createBusinessIDWithModel:(id)a0 controller:(id)a1;
- (BOOL)shouldPreloadSourceWithModel:(id)a0 controller:(id)a1;
- (unsigned long long)preloadResourceTiming;
- (id)preloadResourceSchemaWithModel:(id)a0;
- (unsigned long long)dataInjCacheTiming;
- (id)createDataInjCacheSceneConfigWithController:(id)a0;
- (id)shouldDataInjCacheWithIndexPath:(id)a0 controller:(id)a1;
- (id)requestParamsWithModel:(id)a0 controller:(id)a1;
- (id)sceneID;

@end
