@class WCDragCollectionView, NSString, NSMutableDictionary, WCCollectViewReorder;
@protocol WCDragableSelectorViewDelegate;

@interface WCDragableSelectorView : WCSelectorView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, WCCollectionViewDataSource, WCCollectViewReorderDragDelegate> {
    WCDragCollectionView *_collectionView;
    WCCollectViewReorder *_collectionViewReorder;
    NSMutableDictionary *_cellImageViewDic;
}

@property (weak, nonatomic) id<WCDragableSelectorViewDelegate> dragDelegate;
@property (nonatomic) BOOL scrollEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (double)calCollectionViewWidth;
- (int)calMaxImagePerRow;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reload;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)xd_collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (void)xd_collectionView:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (id)getCellImageViewArray;
- (void)onCollectionViewCellMoved:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)onEndCollectionViewCellMovement:(long long)a0;
- (void).cxx_destruct;

@end
