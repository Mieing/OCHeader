@class AIGCPageDotView;

@interface ACCAIGCPageControl : UIPageControl

@property (retain, nonatomic) AIGCPageDotView *pageDotView;
@property (nonatomic) long long style;
@property (nonatomic) double dotWidth;
@property (nonatomic) double dotHeight;
@property (nonatomic) double dotMargin;

- (void).cxx_destruct;
- (void)setCurrentPage:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setNumberOfPages:(long long)a0;
- (void)setPageIndicatorTintColor:(id)a0;
- (void)setCurrentPageIndicatorTintColor:(id)a0;

@end
