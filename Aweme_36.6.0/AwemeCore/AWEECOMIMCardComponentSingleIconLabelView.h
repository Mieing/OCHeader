@class YYLabel;

@interface AWEECOMIMCardComponentSingleIconLabelView : UIView

@property (retain, nonatomic) YYLabel *label;

+ (double)designHeightWithData:(id)a0 width:(double)a1;
+ (id)singleLabelTextLayoutWithContent:(id)a0 maxWidth:(double)a1;
+ (double)textTopPadding;

- (void).cxx_destruct;
- (void)updateWithData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
