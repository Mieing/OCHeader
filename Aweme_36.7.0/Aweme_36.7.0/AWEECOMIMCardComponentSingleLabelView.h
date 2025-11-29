@class UILabel;

@interface AWEECOMIMCardComponentSingleLabelView : UIView

@property (readonly, nonatomic) UILabel *label;

+ (double)designHeight;
+ (double)designHeightWithData:(id)a0 width:(double)a1;

- (void).cxx_destruct;
- (void)updateWithData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
