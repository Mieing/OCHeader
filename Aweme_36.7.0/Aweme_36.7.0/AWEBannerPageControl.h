@class NSArray, UIColor;

@interface AWEBannerPageControl : UIControl

@property (retain, nonatomic) NSArray *indicators;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) long long currentPage;
@property (nonatomic) BOOL hidesForSinglePage;
@property (nonatomic) double pageIndicatorSpaing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (retain, nonatomic) UIColor *pageIndicatorTintColor;
@property (retain, nonatomic) UIColor *currentPageIndicatorTintColor;
@property (nonatomic) struct CGSize { double width; double height; } pageIndicatorSize;
@property (nonatomic) struct CGSize { double width; double height; } currentPageIndicatorSize;

- (void)updateIndicators;
- (void)layoutIndicators;
- (void)resetIndicators;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)setupView;
- (void)initProperties;

@end
