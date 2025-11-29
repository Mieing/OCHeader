@class NSString, NSDictionary, AWESharkLynxModel, UIView, AWENearbyC2LynxPreloadModel, LynxView;
@protocol AnnieXContainerBaseProtocol, AnnieXCardModelProtocol, AWESharkLynxContainerViewDelegate;

@interface AWESharkAnnieXContainerView : UIView <BDXContainerLifecycleProtocol, AWESharkLynxContainerProtocol>

@property (nonatomic) BOOL rootLayoutAnimationEnabled;
@property (copy, nonatomic) NSString *channelName;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL transformerPredecodeEnable;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *annieXContainer;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (nonatomic) BOOL isAnnieX;
@property (weak, nonatomic) id<AWESharkLynxContainerViewDelegate> lynxContainerDelegate;
@property (readonly, nonatomic) LynxView *lynxView;
@property (readonly, copy, nonatomic) NSString *containerID;
@property (retain, nonatomic) AWESharkLynxModel *lynxModel;
@property (retain, nonatomic) AWENearbyC2LynxPreloadModel *preloadModel;
@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) BOOL isReuse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long loadStrategy;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (void)containerDidUpdate:(id)a0;
- (void)container:(id)a0 onSetupLynxInfo:(id)a1 bulletInfo:(id)a2;
- (void)container:(id)a0 onUpdateLynxInfo:(id)a1 bulletInfo:(id)a2;
- (void)sendEvent:(id)a0 params:(id)a1;
- (id)findViewWithName:(id)a0;
- (id)__bdxParams;
- (void)updateLynxData:(id)a0;
- (void)__updateAnnieXGlobalProps:(id)a0;
- (id)initWithLynxModel:(id)a0 extraParams:(id)a1 delegate:(id)a2 containerConfig:(id)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lynxModel:(id)a1 extraParams:(id)a2 delegate:(id)a3 containerConfig:(id)a4;
- (void)updateLynxModel:(id)a0 extraParams:(id)a1;
- (id)channelNameWithUrl:(id)a0;
- (void)optimizedReload;
- (void)updateWithLynxUrl:(id)a0 rawData:(id)a1 cardType:(long long)a2 extraParams:(id)a3;
- (void)lynxViewWillShow;
- (void)lynxViewWillHide;
- (void)updateLynxModel:(id)a0;
- (void)enableRootLayoutAnimation:(BOOL)a0;
- (void)__setupAnnieXLynxView;
- (void)__updateLynxModel:(id)a0 extraParams:(id)a1;
- (id)__creatAnnieXCardViewWithUrl:(id)a0 bid:(id)a1 service:(id)a2;
- (BOOL)needReloadWithOriginUrl:(id)a0 newUrl:(id)a1;
- (id)__createCardModelWithUrl:(id)a0 bid:(id)a1 service:(id)a2;
- (id)initWithLynxModel:(id)a0 extraParams:(id)a1;
- (BOOL)__hasGeckoResouces;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
