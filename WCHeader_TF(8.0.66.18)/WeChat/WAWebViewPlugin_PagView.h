@class NSString, NSMutableDictionary;
@protocol IMBFileSystem;

@interface WAWebViewPlugin_PagView : WACanvasPlugin_embedView <PAGViewListener, MMImageLoaderObserver>

@property (retain, nonatomic) NSMutableDictionary *pagViewDataList;
@property (weak, nonatomic) id<IMBFileSystem> fileSystem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentAppid;
- (void)insertPagView:(id)a0 withCompletion:(id /* block */)a1;
- (void)updatePagView:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)removePagView:(id)a0;
- (void)preProcess:(id)a0;
- (void)adjustPagViewPara:(id)a0 withPara:(id)a1 completion:(id /* block */)a2;
- (BOOL)checkDownloadResourceLoadedAndPlay:(id)a0;
- (void)onAnimationEnd:(id)a0;
- (void)ImageDidFail:(id)a0;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void).cxx_destruct;

@end
