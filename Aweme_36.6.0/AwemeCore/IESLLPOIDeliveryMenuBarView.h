@class UIView, BDXBridgeEventSubscriber, IESLLGradientView, UIImage, NSArray, IESLLPOIDeliveryMenuBarViewModel, IESLLPOIDeliveryMenuBarUIModel, IESLLGDNoActionEventHandler, IESLLPOIGoodsDetailElevatorView;
@protocol IESLLNavigationBarImageAction, LLDitoComponentViewModel, IESLLNavigationBarInterface;

@interface IESLLPOIDeliveryMenuBarView : LLDitoComponentView

@property (weak, nonatomic) id<LLDitoComponentViewModel> viewModel;
@property (retain, nonatomic) UIView<IESLLNavigationBarInterface> *duxNavigationBar;
@property (retain, nonatomic) id<IESLLNavigationBarImageAction> duxLeftAction;
@property (retain, nonatomic) id<IESLLNavigationBarImageAction> duxShareAction;
@property (retain, nonatomic) id<IESLLNavigationBarImageAction> duxCollectAction;
@property (retain, nonatomic) IESLLPOIDeliveryMenuBarViewModel *navigationBarVM;
@property (retain, nonatomic) IESLLGradientView *gradientView;
@property (retain, nonatomic) UIImage *backWhiteImage;
@property (retain, nonatomic) UIImage *backBlackImage;
@property (retain, nonatomic) UIImage *closeWhiteImage;
@property (retain, nonatomic) UIImage *closeBlackImage;
@property (retain, nonatomic) UIImage *shareWhiteImage;
@property (retain, nonatomic) UIImage *shareBlackImage;
@property (retain, nonatomic) UIImage *collectWhiteImage;
@property (retain, nonatomic) UIImage *collectBlackImage;
@property (retain, nonatomic) UIImage *collectedImage;
@property (retain, nonatomic) IESLLPOIDeliveryMenuBarUIModel *startState;
@property (retain, nonatomic) IESLLPOIDeliveryMenuBarUIModel *endState;
@property (nonatomic) double startShowElevatorOffset;
@property (nonatomic) double elevatorVisibleOffset;
@property (nonatomic) BOOL isPopup;
@property (nonatomic) BOOL shouldShowTitle;
@property (nonatomic) BOOL shouldShowGradientView;
@property (nonatomic) BOOL isWhiteMode;
@property (retain, nonatomic) IESLLPOIGoodsDetailElevatorView *elevatorView;
@property (retain, nonatomic) NSArray *titleTabs;
@property (nonatomic) BOOL shouldShowElevator;
@property (nonatomic) BOOL hasPingbackNavBarShow;
@property (retain, nonatomic) IESLLGDNoActionEventHandler *noActionEventHandler;
@property (weak, nonatomic) BDXBridgeEventSubscriber *subscriber;

- (void)updateViewModel:(id)a0;
- (void)backButtonPress;
- (void)shareButtonPress;
- (void)p_bindActionAndState;
- (void)resetUIByCurrentOffset:(id)a0;
- (void)updateElevatorStyleWithOffsetYValue:(id)a0;
- (void)updateBackgroundWithAlpha:(double)a0 isElevator:(BOOL)a1;
- (void)pingbackNavBarShow;
- (void)alphaAnimationWithContext:(id)a0;
- (void)setupDUXUI;
- (void)initStartStateBackground;
- (void)updateElevatorViewWithForce:(BOOL)a0;
- (void)setDuxAction:(id)a0 withUrl:(id)a1 defaultImage:(id)a2;
- (id)leftBlackImage;
- (void)collectButtonPress;
- (id)leftWhiteImage;
- (id)elevatorBackgroundColorWithAlpha:(double)a0;
- (id)normalBackgroundColorWithAlpha:(double)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
