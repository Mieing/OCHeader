@class NSString;

@interface AWEShowProfileEntTabDataInjCacheHandler : NSObject <AWEShowDataInjCacheHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActiveWithController:(id)a0;

- (void)preloadGeckoResource;
- (double)miniTimeForStartCacheWithPlayTime:(double)a0 totalTime:(double)a1 model:(id)a2 controller:(id)a3;
- (id)createBusinessIDWithModel:(id)a0 controller:(id)a1;
- (unsigned long long)dataInjCacheTiming;
- (id)createDataInjCacheSceneConfigWithController:(id)a0;
- (id)shouldDataInjCacheWithIndexPath:(id)a0 controller:(id)a1;
- (id)requestParamsWithModel:(id)a0 controller:(id)a1;
- (id)sceneID;

@end
