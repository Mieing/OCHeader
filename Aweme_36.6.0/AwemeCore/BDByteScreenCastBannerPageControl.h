@class UIColor, NSMutableArray;

@interface BDByteScreenCastBannerPageControl : UIView

@property (retain, nonatomic) NSMutableArray *indicatorViewArray;
@property (retain, nonatomic) UIColor *pageIndicatorTintColor;
@property (retain, nonatomic) UIColor *currentPageIndicatorTintColor;
@property (nonatomic) BOOL hidesForSinglePage;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) long long currentPage;

- (void)configIndicatorViewArray;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
