@interface AWEStudioRecordImpl.InspirationFollowPanelCollectionView : UIView {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ adapterConfig;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ loadingStatus;
    void /* unknown type, empty encoding */ loadMoreRefreshingBlock;
    void /* unknown type, empty encoding */ retryFetchDataBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_layout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadMoreFooterView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inspirationEmptyView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingSkeletonView;
    void /* unknown type, empty encoding */ contentLeftOffset;
    void /* unknown type, empty encoding */ upSwipeGuideView;
}

- (void)handelLongPressGesture:(id)a0;
- (void)handelUpSwipeGesture:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
