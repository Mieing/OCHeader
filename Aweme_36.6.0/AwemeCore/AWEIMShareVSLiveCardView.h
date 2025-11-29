@class CAGradientLayer, CAShapeLayer, UIImageView, UILabel, AWEIMRefreshImageView;

@interface AWEIMShareVSLiveCardView : UIView

@property (retain, nonatomic) CAGradientLayer *gradient;
@property (retain, nonatomic) CAShapeLayer *liveMasklayer;
@property (retain, nonatomic) UILabel *livingTagLabel;
@property (retain, nonatomic) UILabel *previewTextLabel;
@property (retain, nonatomic) UILabel *episodeLabel;
@property (retain, nonatomic) UILabel *spitLineLabel;
@property (retain, nonatomic) UILabel *episodeTitleLabel;
@property (retain, nonatomic) UILabel *episodeSecondTitleLabel;
@property (retain, nonatomic) UIImageView *playIcon;
@property (retain, nonatomic) AWEIMRefreshImageView *coverImageView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nickNameLabel;

+ (struct CGSize { double x0; double x1; })sizeForView;

- (void)addSubviews;
- (void)setLivingLabelCornerRadius:(struct CGSize { double x0; double x1; })a0 position:(unsigned long long)a1 withModel:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)addConstraints;
- (void)updateWithModel:(id)a0;

@end
