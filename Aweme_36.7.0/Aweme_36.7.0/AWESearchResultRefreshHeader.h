@class AWESearchResultRefreshHeaderToastView;

@interface AWESearchResultRefreshHeader : AWERefreshHeader

@property (retain, nonatomic) AWESearchResultRefreshHeaderToastView *toastView;
@property (copy, nonatomic) id /* block */ searchPreRefreshBlock;
@property (copy, nonatomic) id /* block */ searchPreRefreshOffsetDidChangeBlock;
@property (nonatomic) double ignoredScrollViewMarginTop;

- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewPanStateDidChange:(id)a0;
- (void)resetToast;
- (void)updateScrollViewLoadingViewHiddenForIgnoredScrollViewMarginTop;
- (BOOL)enableFixIgnoredScrollViewMarginTop;
- (BOOL)enablePullDownPreRequest;
- (void)showToastWithTheme:(unsigned long long)a0 message:(id)a1;
- (void).cxx_destruct;
- (void)prepare;

@end
