@class UIImage, AWEPOIGoodsDetailElevatorView, DUXNavigationBar, AWEPOIDeliveryMenuBarViewModel, AWEGradientView, DUXNavigationBarImageAction, NSArray, AWEPOIDeliveryMenuBarUIModel, AWEGDNoActionEventHandler, BDXBridgeEventSubscriber;
@protocol DitoComponentViewModel;

@interface AWEPOIDeliveryMenuBarView : DitoComponentView

@property (weak, nonatomic) id<DitoComponentViewModel> viewModel;
@property (retain, nonatomic) DUXNavigationBar *duxNavigationBar;
@property (retain, nonatomic) DUXNavigationBarImageAction *duxLeftAction;
@property (retain, nonatomic) DUXNavigationBarImageAction *duxShareAction;
@property (retain, nonatomic) DUXNavigationBarImageAction *duxCollectAction;
@property (retain, nonatomic) AWEPOIDeliveryMenuBarViewModel *navigationBarVM;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIImage *backWhiteImage;
@property (retain, nonatomic) UIImage *backBlackImage;
@property (retain, nonatomic) UIImage *closeWhiteImage;
@property (retain, nonatomic) UIImage *closeBlackImage;
@property (retain, nonatomic) UIImage *shareWhiteImage;
@property (retain, nonatomic) UIImage *shareBlackImage;
@property (retain, nonatomic) UIImage *collectWhiteImage;
@property (retain, nonatomic) UIImage *collectBlackImage;
@property (retain, nonatomic) UIImage *collectedImage;
@property (retain, nonatomic) AWEPOIDeliveryMenuBarUIModel *startState;
@property (retain, nonatomic) AWEPOIDeliveryMenuBarUIModel *endState;
@property (nonatomic) double startShowElevatorOffset;
@property (nonatomic) double elevatorVisibleOffset;
@property (nonatomic) BOOL isPopup;
@property (nonatomic) BOOL shouldShowTitle;
@property (nonatomic) BOOL shouldShowGradientView;
@property (nonatomic) BOOL isWhiteMode;
@property (retain, nonatomic) AWEPOIGoodsDetailElevatorView *elevatorView;
@property (retain, nonatomic) NSArray *titleTabs;
@property (nonatomic) BOOL shouldShowElevator;
@property (nonatomic) BOOL hasPingbackNavBarShow;
@property (retain, nonatomic) AWEGDNoActionEventHandler *noActionEventHandler;
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
