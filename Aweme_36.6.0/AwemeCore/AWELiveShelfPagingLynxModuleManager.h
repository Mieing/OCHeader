@class NSMutableDictionary, NSString, NSMutableSet, NSNumber;

@interface AWELiveShelfPagingLynxModuleManager : NSObject <AWEPOICubeViewDelegate>

@property (retain, nonatomic) NSMutableSet *lynxModuleUnusedPool;
@property (retain, nonatomic) NSMutableSet *lynxModuleLoadingPool;
@property (retain, nonatomic) NSMutableDictionary *moduleStartTimeMap;
@property (retain, nonatomic) NSNumber *currentModuleVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (void)cubeView:(id)a0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)cubeViewWillStartLoading:(id)a0;
- (void)cubeView:(id)a0 didStartFetchResourceWithURL:(id)a1;
- (void)cubeView:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)cubeViewDidFirstScreen:(id)a0;
- (void)cubeView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)cubeView:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)cubeView:(id)a0 didReceiveError:(id)a1;
- (void)cleanCacheLynxModuleIfNeeded;
- (void)createLynxModule;
- (id)currentGeckoVersion;
- (id)acquireReadyLynxModule;
- (void)releaseLynxModule:(id)a0;
- (void)preloadModuleIfNeeded;
- (void).cxx_destruct;

@end
