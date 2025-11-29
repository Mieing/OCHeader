@class UIImageView, UILabel;

@interface ACCToneCloneDeleteButton : UIButton

@property (retain, nonatomic) UIImageView *deleteImageView;
@property (retain, nonatomic) UILabel *deleteLabel;

- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityValue;
- (void)setupUI;

@end
