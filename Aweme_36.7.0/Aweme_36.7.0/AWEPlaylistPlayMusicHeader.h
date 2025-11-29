@class CAGradientLayer, UIImageView, UIView, UILabel, UIButton;

@interface AWEPlaylistPlayMusicHeader : UIView

@property (retain, nonatomic) UIButton *playAllButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *playerImageView;
@property (retain, nonatomic) UILabel *desLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) long long count;
@property (copy, nonatomic) id /* block */ tappedPlayallBlock;

- (void)p_setup;
- (void)p_playTapped;
- (void)p_updateColors;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateUI;

@end
