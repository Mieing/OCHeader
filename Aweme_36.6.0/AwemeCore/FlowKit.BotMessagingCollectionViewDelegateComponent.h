@interface FlowKit.BotMessagingCollectionViewDelegateComponent : _TtCC7FlowKit25BotMessagingRootComponent33CentralizedEventHandlingComponent <UIScrollViewDelegate, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ lastContentOffset;
    void /* unknown type, empty encoding */ isScrollingToTop;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)collectionView:(id)a0 didEndDisplayingSupplementaryView:(id)a1 forElementOfKind:(id)a2 atIndexPath:(id)a3;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)scrollViewDidChangeAdjustedContentInset:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
