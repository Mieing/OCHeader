@interface IESECFeedPageControl : UIPageControl

@property (nonatomic) double padding;
@property (nonatomic) double controlSize;
@property (nonatomic) double controlDistance;

- (void)setCurrentPage:(long long)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
