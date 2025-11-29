@class NSDiffableDataSourceSnapshot;

@interface WCFinderCollectionViewDataSource : UICollectionViewDiffableDataSource

@property (retain, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot;

- (void)applySnapshot:(id)a0 animatingDifferences:(BOOL)a1;
- (void).cxx_destruct;

@end
