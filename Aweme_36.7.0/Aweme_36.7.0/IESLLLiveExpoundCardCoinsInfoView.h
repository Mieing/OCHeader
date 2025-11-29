@class CAGradientLayer, UIImageView, IESLLLiveProductRewardTaskInfoModel, UIView, UILabel;

@interface IESLLLiveExpoundCardCoinsInfoView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *coinsInfoLabel;
@property (retain, nonatomic) IESLLLiveProductRewardTaskInfoModel *model;

- (void)addGradientBackground;
- (void)updateSubviewsWithData:(id)a0;
- (id)colors;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
