@interface AWEIMGroupImpl.GroupChatContentViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AWEIMMediaDetailTransitionOuterContextProvider, AWEZoomTransitionOuterContextProvider, IESIMGroupEssenceChildViewControllerProtocol> {
    void /* unknown type, empty encoding */ _toastService;
    void /* unknown type, empty encoding */ _groupTrackUtil;
    void /* unknown type, empty encoding */ _trackService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ collectionViewIsRefresh;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ parentController;
    void /* unknown type, empty encoding */ conversation;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ emptyView;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ enterFrom;
    void /* unknown type, empty encoding */ enterMethod;
    void /* unknown type, empty encoding */ cellSize;
    void /* unknown type, empty encoding */ numberOfItem;
    void /* unknown type, empty encoding */ lastSelectView;
}

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (double)zoomTransitionTargetViewCornerRadius;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusViewFixedFrame;
- (id)mediaDetailTransitionStartView;
- (void)updateEnterFrom:(id)a0 enterMethod:(id)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
