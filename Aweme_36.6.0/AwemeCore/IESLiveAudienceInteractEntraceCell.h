@class CAGradientLayer, UIImageView, IESLiveImageView, UILabel, UIView;

@interface IESLiveAudienceInteractEntraceCell : UICollectionViewCell

@property (retain, nonatomic) IESLiveImageView *icon;
@property (retain, nonatomic) UIImageView *tipImageView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIView *selectedDecorationView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *gradientBackground;

- (void)didSetAttachingDIContext;
- (void)addGradientLayerWithConfiguration:(id)a0;
- (void)decorateSelectedWithConfiguration:(id)a0;
- (void)updateWithConfiguration:(id)a0 style:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)layoutSubviews;
- (void)setupViews;

@end
