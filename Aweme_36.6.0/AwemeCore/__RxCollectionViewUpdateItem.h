@class NSIndexPath;

@interface __RxCollectionViewUpdateItem : UICollectionViewUpdateItem

@property (readonly, nonatomic) NSIndexPath *initialIndexPath;
@property (readonly, nonatomic) NSIndexPath *finalIndexPath;
@property (readonly, nonatomic) long long updateAction;

- (id)initWithOldIndexPath:(id)a0 newIndexPath:(id)a1;
- (id)initWithAction:(long long)a0 forIndexPath:(id)a1;
- (id)initWithInitialIndexPath:(id)a0 finalIndexPath:(id)a1 updateAction:(long long)a2;
- (void).cxx_destruct;
- (id)description;
- (id)indexPathAfterUpdate;
- (id)indexPathBeforeUpdate;
- (BOOL)isSectionOperation;
- (BOOL)isEqual:(id)a0;
- (long long)compareIndexPaths:(id)a0;
- (long long)inverseCompareIndexPaths:(id)a0;
- (id)debugDescription;
- (id)_indexPath;
- (BOOL)_isSectionOperation;

@end
