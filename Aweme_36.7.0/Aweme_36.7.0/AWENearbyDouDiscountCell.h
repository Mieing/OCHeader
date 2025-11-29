@class UIImageView, UILabel, UIView, YYLabel;

@interface AWENearbyDouDiscountCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *awemeContainerView;
@property (retain, nonatomic) UIImageView *awemeCoverImageView;
@property (retain, nonatomic) UIView *awemeBottomView;
@property (retain, nonatomic) UIImageView *awemeBottomBGView;
@property (retain, nonatomic) UIView *goodsDescriptionView;
@property (retain, nonatomic) UIImageView *goodsDescriptionIconView;
@property (retain, nonatomic) YYLabel *goodsDescriptionYYLabel;
@property (retain, nonatomic) UIView *firstShadowingView;
@property (retain, nonatomic) UIView *secondShadowingView;
@property (nonatomic) double cellWidth;
@property (nonatomic) BOOL loadCardImageFailed;

+ (double)cellHeightWithModel:(id)a0 width:(double)a1;

- (void)p_setupBackgroundImage;
- (void)p_loadImageWithFileName:(id)a0 forView:(id)a1;
- (void)p_generateTitleLabelWithString:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
