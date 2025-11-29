@interface FlowCommon.FlowLoadMoreFooter : MJRefreshAutoFooter {
    void /* unknown type, empty encoding */ endLoadMoreState;
    void /* unknown type, empty encoding */ safeAreaBottom;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ contentWidth;
    void /* unknown type, empty encoding */ contentHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_statusLabel;
}

@property (nonatomic) long long state;

- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (void)scrollViewPanStateDidChange:(id)a0;
- (void)clickFooter;
- (void).cxx_destruct;
- (void)prepare;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
