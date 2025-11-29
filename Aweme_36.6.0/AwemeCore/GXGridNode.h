@class NSArray, GXTemplateItem, NSString, NSMutableArray, GXEvent;

@interface GXGridNode : GXBaseNode <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _hasInit;
    BOOL _isOnShow;
    struct CGSize { double width; double height; } _itemSize;
    GXEvent *_scrollEvent;
}

@property (retain, nonatomic) NSArray *dataArray;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) GXTemplateItem *subTemplateItem;
@property (nonatomic) long long column;
@property (nonatomic) BOOL scrollEnable;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) double rowSpacing;
@property (nonatomic) double itemSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindData:(id)a0;
- (BOOL)updateLayoutStyle:(id)a0;
- (void)handleExtend:(id)a0 isCalculate:(BOOL)a1;
- (void)configureViewInfo:(id)a0;
- (id)creatView;
- (void)calculateWithData:(id)a0;
- (void)registerItemCell;
- (void)processListData:(id)a0;
- (void)calculateItemSize;
- (void)setupItemIdentifier:(id)a0;
- (void)handleVisibleCells;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)onDisappear;
- (void)renderView:(id)a0;
- (void)onAppear;

@end
