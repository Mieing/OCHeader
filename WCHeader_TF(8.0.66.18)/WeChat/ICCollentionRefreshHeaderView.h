@class MMUIActivityIndicatorView;
@protocol ICCollentionRefreshHeaderViewDelegate;

@interface ICCollentionRefreshHeaderView : UIView

@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (nonatomic) long long state;
@property (weak, nonatomic) id<ICCollentionRefreshHeaderViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)icRefreshScrollViewDidScroll:(id)a0;
- (void)icRefreshScrollViewDidEndDragging:(id)a0;
- (void)icRefreshScrollViewDataSourceDidFinishedLoading:(id)a0;
- (void)icRefreshScrollViewTrigerAutoRefresh:(id)a0;
- (void).cxx_destruct;

@end
