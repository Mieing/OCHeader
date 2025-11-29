@class NSString, NSMutableDictionary, DitoLynxManager;

@interface AWEPOILynxPreloadManager : NSObject <AWEPOICubeViewDelegate>

@property (retain, nonatomic) NSMutableDictionary *preloadingViewDict;
@property (retain, nonatomic) NSMutableDictionary *readyViewDict;
@property (retain, nonatomic) NSMutableDictionary *finishedViewDict;
@property (retain, nonatomic) NSMutableDictionary *erroredViewDict;
@property (retain, nonatomic) NSMutableDictionary *viewSizeDict;
@property (nonatomic) long long preloadHitCount;
@property (nonatomic) long long allPreloadCount;
@property (nonatomic) BOOL nodeReuse;
@property (weak, nonatomic) DitoLynxManager *ditoLynxManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cubeView:(id)a0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)cubeView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)cubeView:(id)a0 didReceiveError:(id)a1;
- (id)cubeTrackParams;
- (void)preloadViewForCubeModel:(id)a0 lynxClass:(Class)a1 uniqueTag:(id)a2;
- (void)preloadViewForCubeModel:(id)a0 lynxClass:(Class)a1;
- (id)viewForURL:(id)a0 preloadID:(id)a1;
- (void)updatePreLoadCacheWithCubeModel:(id)a0;
- (id)preloadKey:(id)a0;
- (BOOL)shouldEnablePreloadForChannel:(id)a0 bundle:(id)a1 lynxVersion:(unsigned long long)a2;
- (id)findChangedSizeByUniqueTag:(id)a0;
- (id)findFinishedUrlByUniqueTag:(id)a0;
- (id)findErrorByUniqueTag:(id)a0;
- (unsigned long long)packageVersionForChannel:(id)a0;
- (void)preloadViewForURL:(id)a0 lynxClass:(Class)a1;
- (void)ditoManagerWillUpdateWithCubeView:(id)a0 uniqueTag:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
