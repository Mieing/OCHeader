@class NSString, AWELiveLifeLynxView;

@interface AWELiveLifeExpoundCardLynxModuleManager : NSObject <AWEPOICubeViewDelegate>

@property (retain, nonatomic) AWELiveLifeLynxView *loadingLynxModule;
@property (retain, nonatomic) AWELiveLifeLynxView *readyLynxModule;
@property (nonatomic) struct __CFRunLoopObserver { } *runLoopObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (void)stopRunLoopObserver;
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
- (void)preloadLynxMoudleIfNeeded;
- (id)acquireReadyLynxModule;
- (void)releaseLynxModule:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
