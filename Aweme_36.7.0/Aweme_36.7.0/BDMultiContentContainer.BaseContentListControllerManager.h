@interface BDMultiContentContainer.BaseContentListControllerManager : AWEShellControllerManager <BDMultiContentContainer.BaseContentListDataUpdateProtocol, BDMultiContentContainer.BaseContentListCollectionViewProtocol, BDMultiContentContainer.BaseContentListScrollViewProtocol, BDMultiContentContainer.BaseContentListImageCellProtocol, BDMultiContentContainer.BaseContentListComponentProtocol> {
    void /* unknown type, empty encoding */ capabilityManager;
    void /* unknown type, empty encoding */ cacheDict;
    void /* unknown type, empty encoding */ controllersFromCapabilities;
}

- (void)onListDidReset;
- (void)onModelDidUpdateWithModel:(id)a0;
- (void)listDidReloadData:(id)a0;
- (void)listDidPerformBatchUpdates:(id)a0;
- (void)onCollectionView:(id)a0 willDisplay:(id)a1 forItemAt:(id)a2;
- (void)onCollectionView:(id)a0 didEndDisplaying:(id)a1 forItemAt:(id)a2;
- (void)onScrollViewWillBeginDragging:(id)a0;
- (void)onScrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)onScrollViewDidScroll:(id)a0;
- (void)onScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)onScrollViewDidEndDecelerating:(id)a0;
- (id)classNameArray;
- (void)onImageCellDidEndLoadPreviewImage:(id)a0 image:(id)a1 url:(id)a2 error:(id)a3;
- (void)onImageCellDidEndLoadImage:(id)a0 image:(id)a1 url:(id)a2 error:(id)a3;
- (void)onImageCellWillLoadImage:(id)a0 cell:(id)a1;
- (void).cxx_destruct;
- (void)addController:(id)a0;
- (id)init;

@end
