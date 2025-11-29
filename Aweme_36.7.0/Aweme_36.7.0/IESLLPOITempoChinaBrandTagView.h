@class UIImageView, CAGradientLayer, IESLLPOITempoPOIHonorTagModel;

@interface IESLLPOITempoChinaBrandTagView : IESLLPOITempoPOIBaseTagView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView *chinaBrandImage;
@property (retain, nonatomic) IESLLPOITempoPOIHonorTagModel *model;
@property (nonatomic) long long tagsRowHeight;

- (void)makeConstrains;
- (void)configWithRankModel:(id)a0 tagsRowHeight:(long long)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
