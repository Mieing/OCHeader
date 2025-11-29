@class NSString, AWEGDElevatorView, NSArray, DUXNavigationBarImageAction, DUXNavigationBar, UIButton, AWEPOICollectView, AWEPOIGoodsDetailNavigationBarNewViewModel, AWEPOIGoodsDetailShareCouponBubbleManager, AWEGradientView, AWEGDNavigationBarSearchView, DUXPopover;
@protocol DitoComponentViewModel;

@interface AWEGDNavigationBarNewV2 : DitoComponentView

@property (nonatomic) unsigned long long themeType;
@property (retain, nonatomic) DUXNavigationBar *duxNavigationBar;
@property (retain, nonatomic) DUXNavigationBarImageAction *duxLeftAction;
@property (retain, nonatomic) DUXNavigationBarImageAction *duxShareAction;
@property (retain, nonatomic) AWEPOICollectView *collectView;
@property (retain, nonatomic) UIButton *duxSearchButton;
@property (nonatomic) BOOL shouldTryShowCollectTips;
@property (nonatomic) BOOL hasShareButtonShow;
@property (retain, nonatomic) AWEPOIGoodsDetailShareCouponBubbleManager *shareCouponBubbleManager;
@property (retain, nonatomic) AWEGDNavigationBarSearchView *searchView;
@property (retain, nonatomic) AWEGDElevatorView *elevatorView;
@property (retain, nonatomic) AWEPOIGoodsDetailNavigationBarNewViewModel *navigationBarModel;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) DUXPopover *bubble;
@property (nonatomic) double startShowElevatorOffset;
@property (nonatomic) double elevatorVisibleOffset;
@property (nonatomic) BOOL isPopup;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL shouldShowTitle;
@property (nonatomic) BOOL shouldShowGradientView;
@property (retain, nonatomic) NSArray *titleTabs;
@property (nonatomic) BOOL hasPingbackNavBarShow;
@property (copy, nonatomic) NSString *lifeHomepageFreshType;
@property (weak, nonatomic) id<DitoComponentViewModel> viewModel;

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
