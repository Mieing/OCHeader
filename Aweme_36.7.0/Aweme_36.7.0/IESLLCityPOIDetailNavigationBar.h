@class IESLLPOILynxContainerView, NSDictionary, IESLLPOINavButton, UIView, BDXBridgeEventSubscriber, IESLLCityPOIDetailNavigationBarViewModel;

@interface IESLLCityPOIDetailNavigationBar : LLDitoComponentView

@property (retain, nonatomic) UIView *bgView;
@property (weak, nonatomic) IESLLCityPOIDetailNavigationBarViewModel *navigationBarVM;
@property (retain, nonatomic) IESLLPOINavButton *backButton;
@property (retain, nonatomic) IESLLPOILynxContainerView *lynxView;
@property (retain, nonatomic) NSDictionary *previousBizData;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (nonatomic) double lastScrollEventTime;

- (void)pageBack;
- (void)updateViewModel:(id)a0;
- (void)changeBackButtonAtInitialStage:(BOOL)a0;
- (id)extraParamsForLynx;
- (void)registerNoActionHandlerIfNeeded:(id)a0;
- (id)backButtonImageAtInitialStage:(BOOL)a0;
- (id)generalContext;
- (void)setupScrollPercent:(double)a0;
- (void)changeStyleIfNeed:(BOOL)a0;
- (void)backButtonPress;
- (void)pageViewDidScroll:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
