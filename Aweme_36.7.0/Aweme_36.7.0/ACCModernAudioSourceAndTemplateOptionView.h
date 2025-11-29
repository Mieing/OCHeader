@class CAGradientLayer, AWEScrollStringLabel, UIImageView, UILabel, UIView;

@interface ACCModernAudioSourceAndTemplateOptionView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEScrollStringLabel *subtitleLabel;
@property (retain, nonatomic) UIView *selectedBackgroundView;
@property (retain, nonatomic) CAGradientLayer *subtitleMaskLayer;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) long long sourceType;
@property (nonatomic) BOOL animationEnabled;
@property (copy, nonatomic) id /* block */ didSelectBlock;

- (void)updateWithTitle:(id)a0 subtitle:(id)a1;
- (void)updateAccessibility;
- (void)setupSubtitleGradientMask;
- (void)updateSubtitleMaskVisibility;
- (void).cxx_destruct;
- (id)titleFont;
- (id)initWithSourceType:(long long)a0;
- (void)setSelected:(BOOL)a0;
- (id)subtitleFont;
- (void)layoutSubviews;
- (void)setupViews;
- (void)setupAccessibility;
- (void)handleTap;

@end
