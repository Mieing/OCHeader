@interface AWEStudioRecordImpl.InspiratoinLoadingMoreView : AWEStudioRecordImpl.InspirationMJRefreshTrailer {
    void /* unknown type, empty encoding */ customY;
    void /* unknown type, empty encoding */ customWidth;
    void /* unknown type, empty encoding */ customHeight;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_noMoreLabel;
    void /* unknown type, empty encoding */ noMoreDataPullAction;
    void /* unknown type, empty encoding */ isLoadingMore;
}

@property (nonatomic) long long state;

- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)executeRefreshingCallback;
- (void).cxx_destruct;
- (void)prepare;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
