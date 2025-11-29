@class AWEIMCodeGenEffectGameModel, CAGradientLayer, UIVisualEffectView, UIImageView, UILabel, UIView, DUXButton;

@interface AWEIMRecommendSocialEffectCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIVisualEffectView *avatarContainerView;
@property (retain, nonatomic) UIView *multiAvatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) DUXButton *playButton;
@property (retain, nonatomic) AWEIMCodeGenEffectGameModel *effectModel;
@property (retain, nonatomic) UIView *bottomGradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (copy, nonatomic) id /* block */ playTogetherButtonTapBlock;

- (void)configCellWithModel:(id)a0;
- (void)p_setupView;
- (id)adjustColor:(id)a0;
- (id)generateGradientColorsFromColor:(id)a0;
- (void)p_goToPlaySticker;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
