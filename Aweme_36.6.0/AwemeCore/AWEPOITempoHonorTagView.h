@class CAGradientLayer, AWEPOITempoPOIHonorTagModel, UIImageView, UILabel;

@interface AWEPOITempoHonorTagView : AWEPOITempoPOIBaseTagView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView *honorIcon;
@property (retain, nonatomic) UILabel *honorText;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) AWEPOITempoPOIHonorTagModel *model;
@property (nonatomic) long long tagsRowHeight;

- (void)makeConstrains;
- (void)configWithRankModel:(id)a0 tagsRowHeight:(long long)a1;
- (void)setGradientTextColorTo:(id)a0 colors:(id)a1;
- (double)tagPaddingLeft;
- (double)tagPaddingRight;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
