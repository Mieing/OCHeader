@class AWEFeedHotSearchMoreView, AWEHotSpotFastSwitchView, AWEHotSpotShootButton, NSString, UIView, AWEHotSpotFeedViewModel, UITapGestureRecognizer;
@protocol AWEHotSearchInnerBottomViewDelegate;

@interface AWEHotSearchInnerBottomView : UIView <AWEFeedHotSearchMoreViewDelegate, AWEHotSpotShootButtonDelegate, AWEDiscoverDHotSearchInnerBottomViewProtocol>

@property (retain, nonatomic) AWEFeedHotSearchMoreView *hotSearchMoreView;
@property (retain, nonatomic) UITapGestureRecognizer *hotSearchMoreViewTapGesture;
@property (retain, nonatomic) AWEHotSpotFastSwitchView *fastSwitchView;
@property (retain, nonatomic) AWEHotSpotShootButton *shootButton;
@property (retain, nonatomic) UIView *gradientBackgroundMoreView;
@property (weak, nonatomic) id<AWEHotSearchInnerBottomViewDelegate> delegate;
@property (weak, nonatomic) AWEHotSpotFeedViewModel *viewModel;
@property (nonatomic) BOOL shouldHotSearchMoreViewHidden;
@property (nonatomic) BOOL shouldHideBottomSearchMoreView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEHotSearchInnerBottomViewAdapterClass;

- (void)layoutSubviews;
- (id)logExtraDict;
- (id)currentAwemeModel;
- (void)enableInteraction;
- (void)configureUI;
- (BOOL)shouldShowShootButton;
- (id)shootButtonText;
- (id)currentHotSearchModel;
- (void)setMarqueeText:(id)a0;
- (void)updateShootViewWithModel:(id)a0;
- (void)configureUIWithHotSearchWords:(id)a0;
- (void)foldFastSwitchView;
- (id)verticalBoardModel;
- (void)updateLayoutShouldOnlyShowMoreView:(BOOL)a0;
- (void)recoverNormalBGColor;
- (id)initialTabModel;
- (void)animateShow:(BOOL)a0;
- (void)setMoreViewHidden:(BOOL)a0;
- (void)updateMoreLabelContent:(id)a0;
- (id)currentRecommendWord;
- (void)onHotSearchMoreViewClicked;
- (void)trackMoreViewClick;
- (BOOL)shouldTrackWordShow;
- (void)actionClicked;
- (long long)currentHotFeedStyle;
- (id)enterHotSpotInnerWord;
- (BOOL)currentHotSpotIsChallenge;
- (double)hotSearchMoreViewPadding;
- (id)aAWEHotSearchInnerBottomViewAdapter;
- (void)trackShootButtonShow;
- (BOOL)isInitialHotSpotAndShouldShowAction;
- (void)shootButtonAction;
- (id)postVideoLogExtra;
- (void)updateBizParams;
- (void)foldFastSwitchViewAfter1s;
- (void).cxx_destruct;
- (void)disableInteraction;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldShowActionButton;

@end
