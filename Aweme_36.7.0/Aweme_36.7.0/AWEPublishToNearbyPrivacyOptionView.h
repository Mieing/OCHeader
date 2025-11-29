@class UIButton;

@interface AWEPublishToNearbyPrivacyOptionView : UIView

@property (retain, nonatomic) UIButton *button;

+ (id)unSelectedColor;
+ (double)publishToNearbyPrivacyOptionViewWidth;
+ (struct CGSize { double x0; double x1; })ViewSize;
+ (id)selectedColor;

- (void)__buildUI;
- (void)__layoutUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
