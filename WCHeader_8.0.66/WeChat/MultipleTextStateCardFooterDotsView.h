@class NSMutableArray, UIView;

@interface MultipleTextStateCardFooterDotsView : UIView

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } slidingWindow;
@property (retain, nonatomic) NSMutableArray *dotViewList;
@property (retain, nonatomic) UIView *backgroundBlurView;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long index;
@property (nonatomic, getter=isSelected) BOOL selected;

+ (id)generateDotView;
+ (double)height;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initBackgroudView;
- (void)initDotViews;
- (void)setIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (long long)updateSlidingWindowWithOffset;
- (void)updateDotViews;
- (void)updateLayout;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
