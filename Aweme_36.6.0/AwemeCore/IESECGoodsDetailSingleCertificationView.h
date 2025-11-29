@class IESECGoodsCertificationModel, IESECOutsideHideStackView, UIImageView, IESECGoodsGradientViewLabel, UILabel, UIView;

@interface IESECGoodsDetailSingleCertificationView : IESECGoodsDetailBaseComponentView

@property (retain, nonatomic) UIImageView *arrowImage;
@property (retain, nonatomic) IESECOutsideHideStackView *bannerItemsContainerView;
@property (retain, nonatomic) UILabel *longBannerItemsView;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) IESECGoodsCertificationModel *info;
@property (nonatomic) long long certificationType;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) IESECGoodsGradientViewLabel *contentView;
@property (nonatomic) BOOL hideBGImageView;

+ (double)getCertificationViewHeight:(id)a0;

- (void)handleActivityUpdateNotification:(id)a0;
- (void)updateWithCertificationInfo:(id)a0;
- (id)initWithParameters:(id)a0 certificationInfo:(id)a1 componentViewStyle:(long long)a2;
- (void)openCertificationPanel;
- (void)configureBaseUI;
- (void)configureWithUseBannerItemUI:(id)a0;
- (void)configureWithContentUI:(id)a0;
- (void)updateArrowImageStateWithCertificationInfo:(id)a0;
- (void)updateContentConstraintsIfNeeded;
- (BOOL)switchForBrandExperiment;
- (void)configureStyle:(long long)a0;
- (void)configureBaseBrand;
- (id)initWithCertificationInfo:(id)a0 componentViewStyle:(long long)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;

@end
