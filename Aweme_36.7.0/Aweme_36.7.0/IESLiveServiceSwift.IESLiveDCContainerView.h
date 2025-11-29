@interface IESLiveServiceSwift.IESLiveDCContainerView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_tagName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_eventDataController;
    void /* unknown type, empty encoding */ cellSeparatorColor;
    void /* unknown type, empty encoding */ cellSeparatorHeight;
    void /* unknown type, empty encoding */ cellSelectedColor;
    void /* unknown type, empty encoding */ cellBackgroundColor;
    void /* unknown type, empty encoding */ hoverViewOffset;
    void /* unknown type, empty encoding */ scrollDirection;
    void /* unknown type, empty encoding */ dcDelegate;
    void /* unknown type, empty encoding */ dcViewController;
    void /* unknown type, empty encoding */ containerModel;
    void /* unknown type, empty encoding */ isCollectionViewScrolling;
    void /* unknown type, empty encoding */ layoutContainerModel;
    void /* unknown type, empty encoding */ indexPathsToDeleteForSupplementaryView;
    void /* unknown type, empty encoding */ indexPathsToInsertForSupplementaryView;
    void /* unknown type, empty encoding */ p_dataController;
    void /* unknown type, empty encoding */ layoutThrottler;
}

- (void)collectionView:(id)a0 didEndDisplayingSupplementaryView:(id)a1 forElementOfKind:(id)a2 atIndexPath:(id)a3;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)dealloc;

@end
