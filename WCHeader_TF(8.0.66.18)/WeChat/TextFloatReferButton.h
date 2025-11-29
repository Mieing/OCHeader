@class UIImageView, UILabel, UIView;

@interface TextFloatReferButton : MMUIButton

@property (retain, nonatomic) UIImageView *rightImageView;
@property (retain, nonatomic) UILabel *centerLabel;
@property (retain, nonatomic) UIView *hightLightMaskView;

- (id)init;
- (void)updateToShortTitle;
- (void)initView;
- (void)layoutSubviews;
- (void)setupShadow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
