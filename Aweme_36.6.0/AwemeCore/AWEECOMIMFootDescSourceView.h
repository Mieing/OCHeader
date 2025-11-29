@class YYLabel, UIView;

@interface AWEECOMIMFootDescSourceView : UIView

@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) YYLabel *sourceLabel;

+ (double)designHeight;
+ (id)attributedTextWithModel:(id)a0;
+ (double)designWidthWithModel:(id)a0 maxWidth:(double)a1;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
