@class NSArray, UIColor;
@protocol AWENewSkylightCustomPageControlDelegate;

@interface AWENewSkylightCustomPageControl : UIView

@property (retain, nonatomic) NSArray *dotViews;
@property (nonatomic) struct CGSize { double width; double height; } lastSize;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) long long currentPage;
@property (nonatomic) double dotSize;
@property (nonatomic) double spacing;
@property (nonatomic) long long maxDots;
@property (nonatomic) long long centerDots;
@property (weak, nonatomic) id<AWENewSkylightCustomPageControlDelegate> delegate;
@property (retain, nonatomic) UIColor *selectedColor;
@property (retain, nonatomic) UIColor *dotColor;
@property (nonatomic) long long pageOffset;
@property (nonatomic) long long centerOffset;

- (void)updatePositions;
- (double)scaleWithDistance:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateColors;
- (void)createViews;

@end
