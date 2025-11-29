@class UIColor, NSMutableArray;

@interface AWEECOMIMPageIndicator : UIView

@property (retain, nonatomic) NSMutableArray *dotViews;
@property (nonatomic) BOOL changing;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) long long currentPage;
@property (retain, nonatomic) UIColor *dotsColor;
@property (retain, nonatomic) UIColor *selectDotColor;
@property (nonatomic) double dotsSize;
@property (nonatomic) double selectDotsWidthFactor;

- (void)setProgress:(double)a0 fromPage:(long long)a1 toPage:(long long)a2;
- (struct CGSize { double x0; double x1; })displayDotSelectSize;
- (struct CGSize { double x0; double x1; })displayDotNormalSize;
- (id)displayDotSelectColor;
- (id)displayDotNormalColor;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
