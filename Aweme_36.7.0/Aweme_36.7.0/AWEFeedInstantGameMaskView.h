@class AWESpecialCardScrollTipView, AWESpecialCardGradientOverlayView, UIView, AWEFeedInstantGameMaskViewConfig, AWEFeedInstantGameClickTipsView, NSString, NSDictionary, AWEFeedInstantGameCardAdView, AWESpecialCardInfoView, AWEFeedGameCardDoubleButtonComponent, AWEFeedGamePromotionContainerView;
@protocol AWEFeedInstantGameMaskViewDelegate;

@interface AWEFeedInstantGameMaskView : UIView <AWEFeedGameCustomAnimationViewDelegate>

@property (retain, nonatomic) AWEFeedInstantGameMaskViewConfig *config;
@property (retain, nonatomic) NSDictionary *uiConfig;
@property (weak, nonatomic) id<AWEFeedInstantGameMaskViewDelegate> delegate;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) AWESpecialCardGradientOverlayView *topOverlayView;
@property (retain, nonatomic) AWESpecialCardGradientOverlayView *topDeepOverlayView;
@property (retain, nonatomic) AWESpecialCardGradientOverlayView *topDefaultOverlayView;
@property (retain, nonatomic) AWESpecialCardGradientOverlayView *bottomOverlayView;
@property (retain, nonatomic) AWESpecialCardGradientOverlayView *bottomDeepOverlayView;
@property (retain, nonatomic) AWESpecialCardGradientOverlayView *bottomDefaultOverlayView;
@property (retain, nonatomic) UIView *tabbarOverlayView;
@property (retain, nonatomic) UIView *tabbarDeepOverlayView;
@property (retain, nonatomic) AWEFeedGameCardDoubleButtonComponent *btnComponent;
@property (retain, nonatomic) AWESpecialCardScrollTipView *tipView;
@property (retain, nonatomic) AWESpecialCardInfoView *infoView;
@property (retain, nonatomic) AWEFeedInstantGameClickTipsView *clickTipsView;
@property (retain, nonatomic) AWEFeedInstantGameCardAdView *adView;
@property (retain, nonatomic) AWEFeedGamePromotionContainerView *promotionContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onLeftButtonClick;
- (BOOL)p_isBlackColorWithRed:(double)a0 green:(double)a1 blue:(double)a2;
- (void)onActionButtonClick;
- (void)updateTopMaskWithColor:(id)a0;
- (void)updateBottomMaskWithColor:(id)a0;
- (void)updateWithSubscribedStatus:(BOOL)a0;
- (void)onClickCustomAnimationButton;
- (BOOL)enableBgColor;
- (void)updateMaskView;
- (double)getMaxLabelContentWidth:(id)a0 subDesc:(id)a1;
- (BOOL)checkShouldShowCouponContainerView:(long long)a0;
- (void)setupUIWithCouponContainer;
- (void)updateClickTipsViewWithConfig:(id)a0;
- (void)updateAdView:(BOOL)a0 mainTitle:(id)a1 subDesc:(id)a2;
- (BOOL)checkShouldUpdateRightButton:(long long)a0;
- (BOOL)checkShouldShowGoldCoinBtn:(long long)a0;
- (void)addClickTipsView;
- (void)removeClickTipsView;
- (void)handleInfoViewTapGesture;
- (id)initWithDelegate:(id)a0 orientation:(long long)a1;
- (void)updateRightButtonTitle:(id)a0;
- (void)updateWithOrientation:(long long)a0;
- (void)setComponentHidden:(BOOL)a0;
- (void)addTapGesture;
- (void).cxx_destruct;
- (void)setupUI;
- (void)handleTapGesture;
- (void)updateContent:(id)a0;

@end
