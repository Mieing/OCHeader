@interface FlowKit.MessageSearchCardsCellModel : NSObject <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ output;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ isFoldCard;
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ items;
    void /* unknown type, empty encoding */ videoItems;
    void /* unknown type, empty encoding */ trackParams;
    void /* unknown type, empty encoding */ searchUrl;
    void /* unknown type, empty encoding */ shouldShowFooter;
    void /* unknown type, empty encoding */ content;
    void /* unknown type, empty encoding */ feedType;
    void /* unknown type, empty encoding */ trackPosition;
    void /* unknown type, empty encoding */ selectedIndexPath;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 willEndContextMenuInteractionWithConfiguration:(id)a1 animator:(id)a2;
- (void)collectionView:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;

@end
