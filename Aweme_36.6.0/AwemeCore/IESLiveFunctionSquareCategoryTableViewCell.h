@class NSArray, NSString, UICollectionView;
@protocol IESLiveFunctionSquareCategoryTableViewCellDelegate;

@interface IESLiveFunctionSquareCategoryTableViewCell : IESLiveFunctionSquareBaseTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, IESLiveFunctionSquareCategoryContentCollectionViewCellDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *dataSource;
@property (nonatomic) BOOL isUserDragging;
@property (nonatomic) BOOL isBeforeLive;
@property (weak, nonatomic) id<IESLiveFunctionSquareCategoryTableViewCellDelegate> delegate;
@property (nonatomic) BOOL cellCanScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToIndex:(long long)a0;
- (void)tableViewDidClickDebugButtonWithItem:(id)a0;
- (void)tableViewWillShowRowNode:(id)a0 cell:(id)a1;
- (void)tableViewDidEndShowRowNode:(id)a0 cell:(id)a1;
- (void)tableViewDidSelectItem:(id)a0 fromButton:(BOOL)a1;
- (void)initializeOnCellLoaded;
- (void)updateWithDataSource:(id)a0 isBeforeLive:(BOOL)a1;
- (id)getCurrentContentViewVisibleRowNodesNotFirstLoadWithSelectedIndex:(long long)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setupUI;

@end
