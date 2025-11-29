@class AWEPOINavButton, AWEPOILynxContainerView, NSDictionary, BDXBridgeEventSubscriber, AWEPOIDetailNGNavigationBarViewModel;

@interface AWEPOIDetailNGNavigationBarComponentView : DitoComponentView

@property (weak, nonatomic) AWEPOIDetailNGNavigationBarViewModel *viewModel;
@property (retain, nonatomic) AWEPOINavButton *backButton;
@property (nonatomic) BOOL atInitialStage;
@property (retain, nonatomic) AWEPOILynxContainerView *lynxView;
@property (retain, nonatomic) NSDictionary *previousBizData;
@property (nonatomic) double currentOffset;
@property (nonatomic) double lastScrollEventTime;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (nonatomic) BOOL shouldFixY;

- (void)pageBack;
- (void)updateViewModel:(id)a0;
- (void)changeBackButtonAtInitialStage:(BOOL)a0;
- (id)extraParamsForLynx;
- (void)registerNoActionHandlerIfNeeded:(id)a0;
- (id)backButtonImageAtInitialStage:(BOOL)a0;
- (void)pageViewDidScroll:(id)a0;
- (void)setFixedY:(double)a0;
- (void)changeBackButtonImageAtInitialStage:(BOOL)a0;
- (void)modalViewDidEnterFullScreen;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
