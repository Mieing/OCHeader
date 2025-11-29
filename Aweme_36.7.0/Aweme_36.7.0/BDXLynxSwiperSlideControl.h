@class NSArray, UIColor, UIImage;

@interface BDXLynxSwiperSlideControl : UIControl

@property (retain, nonatomic) NSArray *indicatorViews;
@property (nonatomic) BOOL forceUpdate;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) long long currentPage;
@property (nonatomic) BOOL hidesForSinglePage;
@property (nonatomic) double pageIndicatorSpaing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (retain, nonatomic) UIColor *pageIndicatorTintColor;
@property (retain, nonatomic) UIColor *currentPageIndicatorTintColor;
@property (retain, nonatomic) UIImage *pageIndicatorImage;
@property (retain, nonatomic) UIImage *currentPageIndicatorImage;
@property (nonatomic) long long indicatorImageContentMode;
@property (nonatomic) struct CGSize { double width; double height; } pageIndicatorSize;
@property (nonatomic) struct CGSize { double width; double height; } currentPageIndicatorSize;
@property (nonatomic) double animateDuring;
@property (nonatomic) BOOL isRTL;

- (void)configurePropertys;
- (void)updateIndicatorViews;
- (void)updateIndicatorViewsBehavior;
- (void)layoutIndicatorViews;
- (void)setCurrentPage:(long long)a0 animate:(BOOL)a1;
- (void).cxx_destruct;
- (void)setContentVerticalAlignment:(long long)a0;
- (void)setContentHorizontalAlignment:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;

@end
