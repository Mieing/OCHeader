@class UIView, BDXContext, NSString, AWENearbyC2LynxPreloadModel, AWENearbyLynxModel, LynxView, AWENearbyLynxConfig, NSDictionary;
@protocol AWESharkLynxContainerViewDelegate, AWENearbyLynxContainerViewDelegate, BDXViewContainerProtocol;

@interface AWENearbyLynxContainerView : UIView <BDXContainerLifecycleProtocol, AWESharkLynxContainerProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *lynxContainer;
@property (retain, nonatomic) AWENearbyLynxConfig *containerConfig;
@property (nonatomic) BOOL rootLayoutAnimationEnabled;
@property (retain, nonatomic) BDXContext *context;
@property (nonatomic) unsigned long long loadStrategy;
@property (nonatomic) BOOL reloadOptimize;
@property (weak, nonatomic) id<AWENearbyLynxContainerViewDelegate> delegate;
@property (weak, nonatomic) id<AWESharkLynxContainerViewDelegate> lynxContainerDelegate;
@property (readonly, nonatomic) LynxView *lynxView;
@property (readonly, copy, nonatomic) NSString *containerID;
@property (retain, nonatomic) AWENearbyLynxModel *lynxModel;
@property (retain, nonatomic) AWENearbyC2LynxPreloadModel *preloadModel;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) BOOL isReuse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getDynamicLoadUrlWithSourceUrl:(id)a0;
+ (BOOL)grouponFeedsLynxMemoryLeakFix;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerWillStartLoading:(id)a0;
- (void)containerDidStartLoading:(id)a0;
- (void)container:(id)a0 didStartFetchResourceWithURL:(id)a1;
- (void)container:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (void)containerDidUpdate:(id)a0;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (void)container:(id)a0 didReceivePerformanceFirstLoad:(id)a1 bulletPerfDict:(id)a2;
- (void)container:(id)a0 onSetupLynxInfo:(id)a1 bulletInfo:(id)a2;
- (void)container:(id)a0 onUpdateLynxInfo:(id)a1 bulletInfo:(id)a2;
- (void)sendEvent:(id)a0 params:(id)a1;
- (id)findViewWithName:(id)a0;
- (void)registerBridgeHandle:(id /* block */)a0 forMethod:(id)a1;
- (void)setupLynxView;
- (void)updateLynxData:(id)a0;
- (id)bdxParams;
- (void)updateLynxModel:(id)a0 extraParams:(id)a1 refreshHeight:(BOOL)a2;
- (id)initWithLynxModel:(id)a0 extraParams:(id)a1 delegate:(id)a2 containerConfig:(id)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lynxModel:(id)a1 extraParams:(id)a2 delegate:(id)a3 containerConfig:(id)a4;
- (unsigned long long)threadStrategyForURL:(id)a0;
- (id)globalProps:(id)a0;
- (BOOL)isGeckoURL;
- (void)loadLynxURL;
- (void)loadResourcesWithCompletion:(id /* block */)a0;
- (void)updateLynxModel:(id)a0 extraParams:(id)a1;
- (id)channelNameWithUrl:(id)a0;
- (void)optimizedReload;
- (void)appendParametersToLynxModel:(id)a0;
- (void)updateWithLynxUrl:(id)a0 rawData:(id)a1 cardType:(long long)a2 extraParams:(id)a3;
- (void)lynxViewWillShow;
- (void)lynxViewWillHide;
- (id)initWithLynxModel:(id)a0 extraParams:(id)a1 delegate:(id)a2;
- (void)updateLynxModel:(id)a0;
- (void)enableRootLayoutAnimation:(BOOL)a0;
- (void)resetLynxTemplateData:(id)a0;
- (void)reloadLynxTemplateData:(id)a0;
- (void).cxx_destruct;
- (id)channelName;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
