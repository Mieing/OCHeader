@class UIImageView, CAGradientLayer, AWEPOITempoPOIHonorTagModel;

@interface AWEPOITempoChinaBrandTagView : AWEPOITempoPOIBaseTagView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView *chinaBrandImage;
@property (retain, nonatomic) AWEPOITempoPOIHonorTagModel *model;
@property (nonatomic) long long tagsRowHeight;

- (void)makeConstrains;
- (void)configWithRankModel:(id)a0 tagsRowHeight:(long long)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
