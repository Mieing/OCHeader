@interface FlowKitBizUI.FlowRecorderModeComponent : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, FlowKitBizUI.FlowCameraComponentProtocol> {
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewContainerManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_modeService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tracker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cameraService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_albumService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_leftSwipe;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightSwipe;
    void /* unknown type, empty encoding */ didShowQuickAlbumView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_switchView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionLayout;
}

- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)onPreviewSwipe:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
