@class UIStackView, IESECLiveSaleProgressView, IESECLiveGoodsElasticTitleLineModel, IESECLiveGoodsProgressBarModel, IESECLiveGoodsMemoView, IESECLiveImageLabel, IESECLiveAccessibilityLabelGenerator, NSString, YYLabel, NSMutableArray, NSNumber;
@protocol IESECLiveItemTimerProtocol;

@interface IESECLivePromotionCardInfoModule : IESECLivePromotionCardCommonModule <IESECLiveCarouselAnimationViewDelegate>

@property (retain, nonatomic) UIStackView *goodsExpandInfoView;
@property (retain, nonatomic) IESECLiveAccessibilityLabelGenerator *accessibilityLabelGenerator;
@property (retain, nonatomic) UIStackView *seckillProgressStackView;
@property (retain, nonatomic) IESECLiveSaleProgressView *campaignProgressView;
@property (retain, nonatomic) YYLabel *campaignCountDownLabel;
@property (retain, nonatomic) IESECLiveGoodsProgressBarModel *progressModel;
@property (retain, nonatomic) UIStackView *elasticTitleContainer;
@property (retain, nonatomic) IESECLiveImageLabel *statusImageView;
@property (retain, nonatomic) IESECLiveGoodsMemoView *elasticTitleLabel;
@property (retain, nonatomic) IESECLiveGoodsElasticTitleLineModel *elasticTitleLineModel;
@property (retain, nonatomic) NSMutableArray *couponButtonsPool;
@property (retain, nonatomic) NSMutableArray *tagContainersPool;
@property (retain, nonatomic) NSMutableArray *platformTagsPool;
@property (retain, nonatomic) id<IESECLiveItemTimerProtocol> couponTimer;
@property (retain, nonatomic) id<IESECLiveItemTimerProtocol> progressTimer;
@property (retain, nonatomic) id<IESECLiveItemTimerProtocol> elasticTitleTimer;
@property (retain, nonatomic) NSNumber *lineHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithGoodsViewModel:(id)a0;
- (void)animationView:(id)a0 didAppearItem:(id)a1 atIndex:(unsigned long long)a2 animated:(BOOL)a3;
- (void)invalidAllTimer;
- (id)setupElasticTitleLineWithModel:(id)a0;
- (id)setupProgressWithModel:(id)a0;
- (id)setupCouponWithModel:(id)a0 couponIndex:(long long *)a1 container:(id)a2;
- (id)customTagFont;
- (id)setupTagsWithModel:(id)a0 tagContainerIndex:(long long *)a1 tagContentFont:(id)a2;
- (id)userInterestFont;
- (id)setupPlatformTagsWithModel:(id)a0 platformTagIndex:(long long *)a1 container:(id)a2;
- (void)setupStatusImageViewBeforeElasticTitle:(id)a0;
- (double)statusImageViewFontSizeHasLeftIcon:(BOOL)a0;
- (void)invalidElasticTitleTimer;
- (double)countDownFontSize;
- (void)invalidProgressTimer;
- (void)updateCouponModelByUIConfig:(id)a0;
- (void)invalidCouponTimer;
- (id)newTagsContainerWithContentFont:(id)a0;
- (double)progressFontSize;
- (void).cxx_destruct;
- (id)view;
- (void)dealloc;
- (void)setupAccessibility;

@end
