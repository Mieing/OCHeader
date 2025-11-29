@class UIImageView, UIView;

@interface AWEPasswordEyeView : UIView

@property (retain, nonatomic) UIImageView *eyeImageView;
@property (retain, nonatomic) UIView *separationLine;
@property (nonatomic) BOOL currentPasswordState;
@property (copy, nonatomic) id /* block */ didClickEyeImageView;
@property (nonatomic) unsigned long long passwordEyeViewStyle;

- (id)imageConvergenceMiddleScaleWithName:(id)a0;
- (void)updateEyeViewContentSize:(double)a0;
- (id)initWithPasswordEyeViewStyle:(unsigned long long)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)tapAction;

@end
