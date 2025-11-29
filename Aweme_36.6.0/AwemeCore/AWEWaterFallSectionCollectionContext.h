@class AWEWaterFallCollectionController;

@interface AWEWaterFallSectionCollectionContext : NSObject

@property (weak, nonatomic) AWEWaterFallCollectionController *collectionController;
@property (nonatomic) long long section;

- (void)scrollToOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (id)cellForItemAtIndex:(long long)a0;
- (id)dequeueCellOfClass:(Class)a0 atIndex:(long long)a1;
- (id)dequeueCellOfClass:(Class)a0 reuseIdentifier:(id)a1 atIndex:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })collectionFrame;
- (struct CGPoint { double x0; double x1; })collectionContentOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForItemAtIndex:(long long)a0;
- (void)insertItems:(id)a0;
- (void)deleteItems:(id)a0 animation:(BOOL)a1;
- (void)reloadItem:(id)a0 atIndex:(long long)a1;
- (id)initWithCollectionController:(id)a0 section:(long long)a1;
- (void)reloadWithAnimation:(BOOL)a0;
- (id)dequeueSupplementaryOfClass:(Class)a0 reuseIdentifier:(id)a1 kind:(id)a2 atIndex:(long long)a3;
- (id)dequeueSupplementaryOfClass:(Class)a0 kind:(id)a1 atIndex:(long long)a2;
- (void)scrollToItemAtIndex:(long long)a0 atScrollPosition:(unsigned long long)a1 animated:(BOOL)a2;
- (void)scrollToItemCenteredPositionAtIndex:(long long)a0 animated:(BOOL)a1;
- (void)invalidateLayoutWithIndexes:(id)a0;
- (void)insertItems:(id)a0 animation:(BOOL)a1;
- (void)insertItems:(id)a0 atIndex:(long long)a1 animation:(BOOL)a2;
- (void)reloadItem:(id)a0 atIndex:(long long)a1 animation:(BOOL)a2;
- (void)updateGradientBackgroundOffset:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (long long)numberOfItems;
- (id)visibleCells;
- (id)itemAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutIfNeeded;
- (void)reload;
- (void)invalidateLayout;
- (void)deleteItems:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInset;
- (id)viewController;
- (id)collectionView;
- (void)performBatchUpdates:(id /* block */)a0 completion:(id /* block */)a1;
- (id)indexPathForCell:(id)a0;
- (id)visibleItems;

@end
