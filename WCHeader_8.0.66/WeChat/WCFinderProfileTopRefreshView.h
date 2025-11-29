@protocol WCFinderProfileTopRefreshViewDelegate;

@interface WCFinderProfileTopRefreshView : UIView

@property (copy, nonatomic) id /* block */ refreshBlock;
@property (nonatomic) long long state;
@property (weak, nonatomic) id<WCFinderProfileTopRefreshViewDelegate> delegate;
@property (nonatomic) BOOL enable;

+ (id)topRefreshViewWithTrigger:(id /* block */)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)endRefreshing;
- (void)updatePollingProgress:(double)a0;
- (double)expectInsetTop;
- (void)setState:(long long)a0 animated:(BOOL)a1;
- (void)onScrollView:(id)a0 refreshDistance:(double)a1;
- (void)willBeginRefresh;
- (void)didBeginRefresh;
- (void).cxx_destruct;

@end
