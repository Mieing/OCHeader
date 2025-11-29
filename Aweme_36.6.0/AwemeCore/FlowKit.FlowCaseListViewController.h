@interface FlowKit.FlowCaseListViewController : FlowCommon.FlowBaseViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ navTitle;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ lastOffsetCaptureTime;
    void /* unknown type, empty encoding */ lastOffset;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationBar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
}

- (id)flow_trackParametersWith:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
