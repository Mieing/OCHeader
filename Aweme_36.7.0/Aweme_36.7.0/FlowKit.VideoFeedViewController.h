@interface FlowKit.VideoFeedViewController : FlowCommon.FlowBaseViewController <UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ maxPlayIndex;
    void /* unknown type, empty encoding */ currentPlayingIndex;
    void /* unknown type, empty encoding */ loadingIndicatorView;
    void /* unknown type, empty encoding */ loadMoreMode;
    void /* unknown type, empty encoding */ hideBottomView;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
    void /* unknown type, empty encoding */ closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadMoreView;
    void /* unknown type, empty encoding */ initialIndex;
    void /* unknown type, empty encoding */ dataFetcher;
    void /* unknown type, empty encoding */ enterMethod;
    void /* unknown type, empty encoding */ enterMethodString;
    void /* unknown type, empty encoding */ hasFirstAppeared;
    void /* unknown type, empty encoding */ willDisappearPlaying;
    void /* unknown type, empty encoding */ initDate;
    void /* unknown type, empty encoding */ stayBeginDate;
    void /* unknown type, empty encoding */ _audioSceneResource;
    void /* unknown type, empty encoding */ isLoadingMore;
    void /* unknown type, empty encoding */ hasScrolledToInitialVideo;
}

- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGPoint { double x0; double x1; })collectionView:(id)a0 targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)handleCloseButtonTouchUpInside:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)didEnterBackground:(id)a0;
- (void)willEnterForeground:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
