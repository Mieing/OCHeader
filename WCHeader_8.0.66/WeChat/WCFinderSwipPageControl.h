@class UIColor, NSMutableArray;

@interface WCFinderSwipPageControl : UIView

@property (retain, nonatomic) NSMutableArray *indicatorViews;
@property (nonatomic) double normalSize;
@property (nonatomic) double selectedWidth;
@property (nonatomic) double spacing;
@property (nonatomic) long long minIndex;
@property (nonatomic) long long maxIndex;
@property (nonatomic) double contentWidth;
@property (nonatomic) double lastAnimationStartTime;
@property (nonatomic) long long totalPages;
@property (nonatomic) long long currentPage;
@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIColor *selectedColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)handlePageChangeFrom:(long long)a0 to:(long long)a1 animated:(BOOL)a2;
- (void)updateLayout:(BOOL)a0 completion:(id /* block */)a1;
- (void)calculateContentWidth;
- (double)widthForIndex:(long long)a0;
- (double)heightForIndex:(long long)a0;
- (id)colorForIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)cancelCurrentAnimations;
- (void)pushLeftAnimated:(BOOL)a0;
- (void)pushRightAnimated:(BOOL)a0;
- (void).cxx_destruct;

@end
