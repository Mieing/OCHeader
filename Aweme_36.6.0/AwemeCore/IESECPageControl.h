@class UIColor, NSMutableArray, UIView;

@interface IESECPageControl : UIControl {
    struct CGSize { double width; double height; } _indicatorContainerLayoutSize;
}

@property (retain, nonatomic) UIView *pageControlContentView;
@property (retain, nonatomic) UIView *pageControlIndicatorContentView;
@property (retain, nonatomic) NSMutableArray *indicators;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) long long currentPage;
@property (nonatomic) struct CGSize { double width; double height; } preferredIndicatorSize;
@property (nonatomic) double maximumIndicatorSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) BOOL hidesForSinglePage;
@property (retain, nonatomic) UIColor *pageIndicatorTintColor;
@property (retain, nonatomic) UIColor *currentPageIndicatorTintColor;

- (struct CGSize { double x0; double x1; })_defaultPreferredIndicatorSize;
- (double)_defaultIndicatorSpacing;
- (void)_removeAllIndicators;
- (void)_generateIndicators;
- (void)_updateCurrentIndicator;
- (struct CGSize { double x0; double x1; })_updateIndicatorsLayoutForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_defaultPageIndicatorTintColor;
- (id)_defaultCurrentPageIndicatorTintColor;
- (id)_currenPageIndicatorTintColor;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_pageIndicatorTintColor;
- (void)setupSubviews;

@end
