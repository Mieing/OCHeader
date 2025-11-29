@class NSString, AWESearchPromotionGuideSearchSlidingTabBar, AWEEcomSearchPromotionGuideSearchShapeLayer, CALayer, AWEEcommerceGuideSearchV2Model, AWESearchGSInfoModel, CAGradientLayer, AWESearchPromotionGuideSearchView, DUXBaseButton, NSDictionary;

@interface AWESearchPromotionGuideSearchContainerView : UIView <AWESearchPromotionGuideSearchViewProtocol, AWESearchPromotionGuideSearchSlidingTabBarProtocol>

@property (retain, nonatomic) AWESearchPromotionGuideSearchSlidingTabBar *slidingTabBar;
@property (retain, nonatomic) DUXBaseButton *viewMoreButton;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) AWEEcommerceGuideSearchV2Model *v2model;
@property (nonatomic) long long selectedTabIndex;
@property (nonatomic) BOOL isFromEcommerce;
@property (nonatomic) BOOL isNewGuideSearchWordList;
@property (retain, nonatomic) AWESearchGSInfoModel *gsInfo;
@property (retain, nonatomic) AWEEcomSearchPromotionGuideSearchShapeLayer *promotionGSShapeLayer;
@property (retain, nonatomic) AWEEcomSearchPromotionGuideSearchShapeLayer *strokeLayer;
@property (retain, nonatomic) CALayer *backgroundLayer;
@property (retain, nonatomic) CALayer *shapedContainerLayer;
@property (retain, nonatomic) CAGradientLayer *shapedContainerGradientLayer;
@property (retain, nonatomic) CAGradientLayer *backgroundGradientLayer;
@property (retain, nonatomic) AWESearchPromotionGuideSearchView *guideSearchView;
@property (copy, nonatomic) NSDictionary *extraTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)guideSearchContainerHeightWithModel:(id)a0;

- (void)trackCardShow;
- (void)resetResults;
- (void)updateWithModel:(id)a0 isFromEcommerce:(BOOL)a1 isNewGuideSearchWordList:(BOOL)a2 gsInfo:(id)a3;
- (void)updateGSLayer;
- (long long)getSelectedTabIndex;
- (id)getSelectedTabModel;
- (id)getGuideSearchViewModelV2;
- (void)switchToPreviousTab;
- (void)switchToNextTab;
- (void)setupDefaultData;
- (void)switchToTabIndex:(long long)a0;
- (void)trackTabJumpMoreClickWithTabIndex:(long long)a0 tabModel:(id)a1;
- (void)trackTabJumpMoreShowWithTabIndex:(long long)a0 tabModel:(id)a1;
- (void)trackTabClickWithSelectedTabIndex:(long long)a0 enterMethod:(id)a1;
- (void)switchTabWithTabIndex:(long long)a0 switchMethod:(id)a1;
- (void)viewMoreButtonTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
