@interface AWEIMGroupImpl.GroupFileListViewController : UIViewController <IESIMGroupCollectUpdateMessage, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, IESIMGroupEssenceChildViewControllerProtocol> {
    void /* unknown type, empty encoding */ _groupCollectService;
    void /* unknown type, empty encoding */ _toastService;
    void /* unknown type, empty encoding */ _trackService;
    void /* unknown type, empty encoding */ _groupTrackUtil;
    void /* unknown type, empty encoding */ conversation;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ $__lazy_storage_$_emptyView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_errorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ enterFrom;
    void /* unknown type, empty encoding */ enterMethod;
}

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)updateGroupCollectFileListWithRemovedFileId:(id)a0;
- (void)updateEnterFrom:(id)a0 enterMethod:(id)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)loadView;

@end
