@class UILabel, CAGradientLayer;

@interface AWEEditStickerHintView : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL shouldUseGradient;

+ (void)setNoNeedShowForType:(unsigned long long)a0;
+ (BOOL)isNeedShowHintViewForType:(unsigned long long)a0;
+ (id)storageKeyForType:(unsigned long long)a0;

- (void)showHint:(id)a0;
- (void)showHint:(id)a0 animated:(BOOL)a1 autoDismiss:(BOOL)a2;
- (void)showHint:(id)a0 type:(unsigned long long)a1;
- (void)p_setupUIWithGradient;
- (void)p_animate;
- (id)initWithGradientAndFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)dismissWithAnimation:(BOOL)a0;
- (void)registerNotifications;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)autoDismiss;
- (void)layoutSubviews;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)setupUI;

@end
