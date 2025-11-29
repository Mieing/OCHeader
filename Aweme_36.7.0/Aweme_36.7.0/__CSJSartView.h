@class NSArray;

@interface __CSJSartView : UIView

@property (copy, nonatomic) NSArray *starImageViewArray;
@property (nonatomic) struct CGSize { double width; double height; } starSize;
@property (nonatomic) double starMargin;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageName:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
