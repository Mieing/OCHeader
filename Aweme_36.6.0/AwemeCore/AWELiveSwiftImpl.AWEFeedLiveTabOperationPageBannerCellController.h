@interface AWELiveSwiftImpl.AWEFeedLiveTabOperationPageBannerCellController : AWEBaseListCellController <AWELiveSwiftImpl.LivePageAppLifeCycleProtocol, AWELiveSwiftImpl.LivePageContainerLifeCycleProtocol> {
    void /* unknown type, empty encoding */ cardShowBlock;
}

- (void)onContainerViewDidAppear;
- (void)didBindCellViewModel;
- (struct CGSize { double x0; double x1; })sizeForItemWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)configCell:(id)a0;
- (void)willDisplayCell:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (Class)cellClass;

@end
