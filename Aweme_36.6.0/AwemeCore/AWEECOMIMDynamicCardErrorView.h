@class UILabel, UIImageView;

@interface AWEECOMIMDynamicCardErrorView : UIView

@property (retain, nonatomic) UILabel *promptLabel;
@property (retain, nonatomic) UIImageView *errorIamgeView;

+ (struct CGSize { double x0; double x1; })errorViewSizeWithType:(long long)a0 unSupportStr:(id)a1 isSystemCard:(BOOL)a2;

- (void)updateErrorViewWithType:(long long)a0 unSupportStr:(id)a1 isSystemCard:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
