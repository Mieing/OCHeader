@class AWEDiscoverDPlayletPanelRouterManager, NSString, BDXBridgeEventSubscriber, UIView, AWEAwemeModel, UITapGestureRecognizer;
@protocol AnnieXContainerBaseProtocol, AWEDiscoverDPlayletBottomTipViewDelegate, AnnieXCardModelProtocol;

@interface AWEDiscoverDPlayletBottomTipView : UIView <BDXContainerLifecycleProtocol, UIGestureRecognizerDelegate, AWEDiscoverDPlayletPanelRouterManagerDelegate>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWEDiscoverDPlayletBottomTipViewDelegate> delegate;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *containerView;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (retain, nonatomic) BDXBridgeEventSubscriber *marketingContainerActionSubscriber;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) AWEDiscoverDPlayletPanelRouterManager *routerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (id)schemaModel;
- (void)selfTapped:(id)a0;
- (id)initWithModel:(id)a0 delegate:(id)a1;
- (void)setupAnnieXContainer;
- (id)playletModel;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (id)currentModel;
- (void)addObservers;

@end
