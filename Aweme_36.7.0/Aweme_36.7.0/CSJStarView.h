@class __CSJSartView;

@interface CSJStarView : UIView

@property (retain, nonatomic) __CSJSartView *starView;
@property (retain, nonatomic) __CSJSartView *emptyStarView;
@property (nonatomic) struct CGSize { double width; double height; } starSize;
@property (nonatomic) double starMargin;
@property (nonatomic) double score;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
