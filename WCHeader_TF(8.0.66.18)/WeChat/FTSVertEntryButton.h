@class MMBadgeView;

@interface FTSVertEntryButton : MMUIButton

@property (retain, nonatomic) MMBadgeView *reddotView;

- (id)init;
- (void)initView;
- (void)showReddotView:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
