@class UIColor;

@interface AIGCPageDotView : UIView

@property (nonatomic) long long numberOfPages;
@property (nonatomic) long long currentPage;
@property (retain, nonatomic) UIColor *pageIndicatorColor;
@property (retain, nonatomic) UIColor *currentPageIndicatorColor;
@property (nonatomic) double dotWidth;
@property (nonatomic) double dotHeight;
@property (nonatomic) double dotMargin;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
