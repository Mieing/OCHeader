@class NSArray, UIColor, UIView;

@interface AWEIMCycleBannerPageIndicatorView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *currentPageView;
@property (retain, nonatomic) NSArray *pageViewArray;
@property (nonatomic) unsigned long long numberOfPages;
@property (nonatomic) unsigned long long currentPage;
@property (nonatomic) BOOL hidesForSinglePage;
@property (retain, nonatomic) UIColor *pageIndicatorTintColor;
@property (retain, nonatomic) UIColor *currentPageIndicatorTintColor;

- (void)layoutCurrentPageView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
