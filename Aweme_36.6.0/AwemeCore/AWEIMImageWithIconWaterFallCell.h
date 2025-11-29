@class UIImageView;

@interface AWEIMImageWithIconWaterFallCell : AWEIMImageWaterFallCell

@property (retain, nonatomic) UIImageView *iconImageView;

+ (id)identifier;

- (void)configWithItem:(id)a0;
- (void)p_setupSubUI;
- (void)p_updateSubUIWithItem:(id)a0;
- (void)p_updateIconLayoutWithPosition:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
