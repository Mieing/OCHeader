@class AWESearchMerchandiseRecommendReasonView, UICollectionView, AWEEcomSearchWebImageView, NSDictionary, UILabel, AWEEcomSearchGoodsTagInfoView, AWEDoubleColumnSearchMerchandiseUserInfoModel, UIButton, UIView, NSString, YYLabel, LOTAnimationView, UIImageView;
@protocol AWESearchLiveViewProtocol, AWESearchMerchandiseUserWindowInfoDelegate;

@interface AWESearchMerchandiseUserWindowCommonInfoView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *avatarView;
@property (retain, nonatomic) UIImageView *verificationBadgeView;
@property (retain, nonatomic) UILabel *liveTitleLabel;
@property (retain, nonatomic) UIView *circleView;
@property (retain, nonatomic) UIImageView *productImageView;
@property (retain, nonatomic) UIButton *enterWindowButton;
@property (retain, nonatomic) UIView *userInfoContentView;
@property (retain, nonatomic) UIImageView *scoreBgImageView;
@property (retain, nonatomic) UIView *shopGuaranteeTagView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) LOTAnimationView *liveBreathView;
@property (retain, nonatomic) AWEEcomSearchWebImageView *avatarImageView;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseUserInfoModel *model;
@property (retain, nonatomic) UIView<AWESearchLiveViewProtocol> *liveView;
@property (retain, nonatomic) AWEEcomSearchGoodsTagInfoView *tagInfoView;
@property (retain, nonatomic) YYLabel *descriptionLabel;
@property (retain, nonatomic) UIView *shortLine;
@property (retain, nonatomic) UIView *connectionView;
@property (retain, nonatomic) UILabel *connectionID;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *noShopLabel;
@property (retain, nonatomic) AWESearchMerchandiseRecommendReasonView *recommendReasonView;
@property (retain, nonatomic) UIView *rightFixedView;
@property (retain, nonatomic) UICollectionView *dynamicLabelContainer;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UIImageView *scoreImgView;
@property (weak, nonatomic) id<AWESearchMerchandiseUserWindowInfoDelegate> delegate;
@property (retain, nonatomic) NSDictionary *searchInfoDict;
@property (nonatomic) BOOL isFromECommerce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (BOOL)shouldShowRecommendReasonView:(id)a0;

- (id)getSearchResultId;
- (void)updateAvatarWithModel:(id)a0;
- (void)updateVerificationBadgeViewImageWithModel:(id)a0;
- (void)updateLiveTitleWithModel:(id)a0;
- (void)configShopGuaranteeTagViewWithMode:(id)a0;
- (id)configsStarWithModel:(id)a0;
- (double)widthForString:(id)a0 withFont:(id)a1;
- (id)configsDiamondWithModel:(id)a0;
- (void)updateScoreBgImageViewWithModel:(id)a0;
- (void)configDynamicLabelContainerWithModel:(id)a0;
- (void)updateRecommendReasonViewWithModel:(id)a0;
- (void)tapRecommendReasonView;
- (void)userAvatarImageTapped;
- (void)enterWindowOrStore;
- (void)userInfoClick:(id)a0;
- (void)transferToProfile;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
