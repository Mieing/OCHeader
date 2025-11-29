@class UIView;
@protocol MMLoadMoreTableViewDelegate;

@interface MMLoadMoreTableView : MMTableView {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _insetsBefore;
}

@property (weak, nonatomic) id<MMLoadMoreTableViewDelegate> loadMoreDelegate;
@property (retain, nonatomic) UIView *loadingView;
@property (nonatomic) BOOL disableLoadMore;
@property (nonatomic) float startLoadingAnimationDuration;
@property (nonatomic) float stopLoadingAnimationDuration;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)layoutSubviews;
- (void)onScrollViewWillBeginDecelerating;
- (void)startLoadMore;
- (void)onLoadDone;
- (void).cxx_destruct;

@end
