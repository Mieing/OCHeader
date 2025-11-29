@class NSArray, NSMutableDictionary, NSString, UIView, LLDitoPageContext;
@protocol LLDitoLynxManagerDelegate;

@interface LLDitoLynxManager : NSObject <LLDitoLynxManagerProtocol, LLCubeViewDelegate>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) NSMutableDictionary *preloadingDic;
@property (retain, nonatomic) NSMutableDictionary *preloadedDic;
@property (copy, nonatomic) NSArray *lynxNodes;
@property (copy, nonatomic) id /* block */ preloadCompletion;
@property (retain, nonatomic) NSMutableDictionary *renderStartTimeDic;
@property (retain, nonatomic) NSMutableDictionary *bridgeManagerMap;
@property (nonatomic) BOOL syncInvokeLynxCallback;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (copy, nonatomic) NSString *sharedGroupName;
@property (weak, nonatomic) id<LLDitoLynxManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearAllCache;
- (id)ditoLogCommonParams;
- (void)cubeView:(id)a0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)cubeView:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)cubeViewDidFirstScreen:(id)a0;
- (void)cubeView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)cubeView:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)cubeViewDidUpdate:(id)a0;
- (void)cubeView:(id)a0 didReceiveError:(id)a1;
- (id)bizContextWithCubeView:(id)a0;
- (void)updateLynxRawDataWithNodes:(id)a0 waitFinish:(BOOL)a1;
- (void)clearCacheWithNodes:(id)a0;
- (id)cubeTrackParams;
- (id)viewWithUniqueTag:(id)a0;
- (double)heightWithUniqueTag:(id)a0;
- (struct CGSize { double x0; double x1; })sizeWithUniqueTag:(id)a0;
- (double)renderCompleteHeightWithTag:(id)a0;
- (void)preRenderWithNodes:(id)a0 context:(id)a1 container:(id)a2 completion:(id /* block */)a3;
- (id)viewWithNode:(id)a0;
- (id)preloadResultWithTag:(id)a0;
- (void)renderWithNode:(id)a0 context:(id)a1 container:(id)a2;
- (unsigned long long)numberOfLynxNodeInRendering;
- (void)invokeLynxCallback:(id /* block */)a0;
- (void)postCheck;
- (unsigned long long)numberOfLynxNodeDidStartLoad;
- (unsigned long long)numberOfLynxNodeDidEndLoad;
- (id)nodeTagListOfLynxNodeDidStartLoad;
- (id)nodeTagListOfLynxNodeDidEndLoad;
- (id)reorderLynxNodes:(id)a0;
- (id)filterLynxNodes:(id)a0;
- (id)uniqueTagWithNode:(id)a0;
- (BOOL)shouldCreateNewLynxNode:(id)a0 withExistNodes:(id)a1;
- (void)updateWithPreloadedContainerView:(id)a0 node:(id)a1 context:(id)a2 beforeUpdateBlock:(id /* block */)a3;
- (void)bindBridgeManagerForContainer:(id)a0 nodeTag:(id)a1;
- (id)lynxContainerViewWithNode:(id)a0 context:(id)a1;
- (void)updateLynxView:(id)a0 model:(id)a1 extraParams:(id)a2;
- (id)preloadResultWithLynxContainer:(id)a0;
- (void)calculatePreRenderHeight:(id)a0 node:(id)a1 context:(id)a2;
- (id)lynxCardFillParamsWithCubeView:(id)a0 loadResult:(BOOL)a1;
- (id)preloadingViewWithUniqueTag:(id)a0;
- (double)heightWithNode:(id)a0;
- (struct CGSize { double x0; double x1; })sizeWithNode:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
