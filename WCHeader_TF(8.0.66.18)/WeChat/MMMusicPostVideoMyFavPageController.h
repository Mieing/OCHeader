@class NSString, UICollectionView, MMMusicPostVideoCollectionFooterCell, MMMusicPostVideoMyFavDataVM;

@interface MMMusicPostVideoMyFavPageController : MMMusicPostVideoBasePageController <MMMusicPostVideoMyFavDataVMDelegate, MMMusicPostVideoCollectionCellDelegate> {
    MMMusicPostVideoMyFavDataVM *_dataVM;
    UICollectionView *_listView;
    MMMusicPostVideoCollectionFooterCell *m_footerView;
    BOOL m_continueFlag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCanMultiSelect:(BOOL)a0;
- (void)layoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onSwitchToThisPage:(BOOL)a0;
- (void)updateDataSelectedStatus;
- (BOOL)updateDataSelectedStatusByUniqueId:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (double)streamLayout:(id)a0 heightForItemAtIndex:(id)a1 itemWidth:(double)a2;
- (void)onDataVMDataChanged:(BOOL)a0;
- (void)mmMusicPostVideoCollectionCell:(id)a0 onSelectedBtnClicked:(id)a1;
- (id)dataViewModel;
- (void).cxx_destruct;

@end
