@class UIView, IESLLPOIGoodsDetailElevatorView, IESLLGradientView, UIImage, NSArray, IESLLPOIGoodsDetailShareCouponBubbleManager, IESLLGDNoActionEventHandler, IESLLPOIGoodsDetailNavigationBarNewViewModel, IESLLPOIGoodsDetailNavigationBarUIModel;
@protocol IESLLNavigationBarImageAction, LLDitoComponentViewModel, IESLLNavigationBarInterface;

@interface IESLLPOIGoodsDetailNavigationBarNew : LLDitoComponentView

@property (weak, nonatomic) id<LLDitoComponentViewModel> viewModel;
@property (retain, nonatomic) UIView<IESLLNavigationBarInterface> *duxNavigationBar;
@property (retain, nonatomic) id<IESLLNavigationBarImageAction> duxLeftAction;
@property (retain, nonatomic) id<IESLLNavigationBarImageAction> duxShareAction;
@property (nonatomic) BOOL hasShareButtonShow;
@property (retain, nonatomic) IESLLPOIGoodsDetailShareCouponBubbleManager *shareCouponBubbleManager;
@property (retain, nonatomic) IESLLPOIGoodsDetailNavigationBarNewViewModel *navigationBarVM;
@property (retain, nonatomic) IESLLGradientView *gradientView;
@property (retain, nonatomic) UIImage *backWhiteImage;
@property (retain, nonatomic) UIImage *backBlackImage;
@property (retain, nonatomic) UIImage *closeWhiteImage;
@property (retain, nonatomic) UIImage *closeBlackImage;
@property (retain, nonatomic) UIImage *shareWhiteImage;
@property (retain, nonatomic) UIImage *shareBlackImage;
@property (retain, nonatomic) IESLLPOIGoodsDetailNavigationBarUIModel *startState;
@property (retain, nonatomic) IESLLPOIGoodsDetailNavigationBarUIModel *endState;
@property (nonatomic) double startShowElevatorOffset;
@property (nonatomic) double elevatorVisibleOffset;
@property (nonatomic) BOOL isPopup;
@property (nonatomic) BOOL shouldShowTitle;
@property (nonatomic) BOOL shouldShowGradientView;
@property (retain, nonatomic) IESLLPOIGoodsDetailElevatorView *elevatorView;
@property (retain, nonatomic) NSArray *titleTabs;
@property (nonatomic) BOOL shouldShowElevator;
@property (nonatomic) BOOL hasPingbackNavBarShow;
@property (retain, nonatomic) IESLLGDNoActionEventHandler *noActionEventHandler;

- (void)updateViewModel:(id)a0;
- (void)backButtonPress;
- (id)shareTrackParams;
- (void)openSharePanel;
- (void)shareButtonPress;
- (void)p_bindActionAndState;
- (void)resetUIByCurrentOffset:(id)a0;
- (void)updateElevatorStyleWithOffsetYValue:(id)a0;
- (void)updateBackgroundWithAlpha:(double)a0 isElevator:(BOOL)a1;
- (void)pingbackNavBarShow;
- (void)alphaAnimationWithContext:(id)a0;
- (void)navigationBarDidShow;
- (void)setupDUXUI;
- (void)initStartStateBackground;
- (void)updateElevatorViewWithForce:(BOOL)a0;
- (void)setDuxAction:(id)a0 withUrl:(id)a1 defaultImage:(id)a2;
- (id)leftBlackImage;
- (id)leftWhiteImage;
- (id)elevatorBackgroundColorWithAlpha:(double)a0;
- (id)normalBackgroundColorWithAlpha:(double)a0;
- (void).cxx_destruct;
- (void)updateTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
