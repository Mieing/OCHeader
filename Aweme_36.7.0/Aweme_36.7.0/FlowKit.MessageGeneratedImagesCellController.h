@interface FlowKit.MessageGeneratedImagesCellController : NSObject <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ cell;
    void /* unknown type, empty encoding */ needRefreshOffset;
    void /* unknown type, empty encoding */ lastOffset;
    void /* unknown type, empty encoding */ datasource;
    void /* unknown type, empty encoding */ _settingsProvider;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
