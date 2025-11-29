@class CAGradientLayer, UIImageView, IESLiveImageView, UIView, UILabel;

@interface IESLiveMultiKTVLyricModeHighScoreTagView : UIView

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) CAGradientLayer *gradientBackgoundLayer;
@property (retain, nonatomic) UIImageView *headerIcon;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) IESLiveImageView *trailView;
@property (copy, nonatomic) id /* block */ tapAction;

- (void)updateUser:(id)a0 textString:(id)a1;
- (id)initWithHighScoreTagType:(unsigned long long)a0;
- (double)headerIconLeftOffset;
- (double)textLabelLeftOffset;
- (void)didTapViewActions;
- (void)showAnimationWithAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;
- (double)headerIconSize;
- (double)headerIconCornerRadius;

@end
