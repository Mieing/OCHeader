@class UIView, NSString, IESLLGradientView, NSArray, IESLLGDNavigationBarSearchView, IESLLPOIGoodsDetailShareCouponBubbleManager, IESLLPOICollectView, IESLLPOIGoodsDetailNavigationBarNewViewModel, IESLLGDElevatorView, UIButton;
@protocol LLDitoComponentViewModel, IESLLNavigationBarImageAction, IESLLPopoverInterface, IESLLNavigationBarInterface;

@interface IESLLGDNavigationBarNewV2 : LLDitoComponentView

@property (nonatomic) unsigned long long themeType;
@property (retain, nonatomic) UIView<IESLLNavigationBarInterface> *duxNavigationBar;
@property (retain, nonatomic) id<IESLLNavigationBarImageAction> duxLeftAction;
@property (retain, nonatomic) id<IESLLNavigationBarImageAction> duxShareAction;
@property (retain, nonatomic) UIButton *duxSearchButton;
@property (retain, nonatomic) IESLLPOICollectView *collectView;
@property (nonatomic) BOOL shouldTryShowCollectTips;
@property (nonatomic) BOOL hasShareButtonShow;
@property (retain, nonatomic) IESLLPOIGoodsDetailShareCouponBubbleManager *shareCouponBubbleManager;
@property (retain, nonatomic) IESLLGDNavigationBarSearchView *searchView;
@property (retain, nonatomic) IESLLGDElevatorView *elevatorView;
@property (retain, nonatomic) IESLLPOIGoodsDetailNavigationBarNewViewModel *navigationBarModel;
@property (retain, nonatomic) IESLLGradientView *gradientView;
@property (retain, nonatomic) UIView<IESLLPopoverInterface> *bubble;
@property (nonatomic) double startShowElevatorOffset;
@property (nonatomic) double elevatorVisibleOffset;
@property (nonatomic) BOOL isPopup;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL shouldShowTitle;
@property (nonatomic) BOOL shouldShowGradientView;
@property (retain, nonatomic) NSArray *titleTabs;
@property (nonatomic) BOOL hasPingbackNavBarShow;
@property (copy, nonatomic) NSString *lifeHomepageFreshType;
@property (weak, nonatomic) id<LLDitoComponentViewModel> viewModel;

- (void)updateViewModel:(id)a0;
- (void)backButtonPress;
- (void)subscribeAction;
- (id)buildSearchWordReqParams;
- (void)showCollectHintBubble:(BOOL)a0;
- (id)shareTrackParams;
- (void)openSharePanel;
- (void)shareButtonPress;
- (void)searchBarButtonPress;
- (void)collectionButtonPress;
- (void)collectBubbleDidTapped;
- (void)changeCollectViewAccessibility:(BOOL)a0;
- (void)configationNavigationBarBackgroundColorIfNeeded;
- (void)unSubscribeAction;
- (void)subscribeSwitchHalfScreenModeAction;
- (void)p_bindActionAndState;
- (void)reportTrackWithEventName:(id)a0;
- (void)resetUIByCurrentOffset:(id)a0;
- (void)updateElevatorStyleWithOffsetYValue:(id)a0;
- (void)updateBackgroundWithAlpha:(double)a0 isElevator:(BOOL)a1;
- (void)configationNavigationBarBtnStyleIfNeeded;
- (void)updateGradientViewIfNeeded;
- (void)pingbackNavBarShow;
- (void)updateNavigationBarBtnShowWhenFullScreenIfNeeded;
- (void)adaptCollectionViewImage;
- (void)alphaAnimationWithContext:(id)a0;
- (void)navigationBarDidShow;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;
- (void)setUpUI;

@end
