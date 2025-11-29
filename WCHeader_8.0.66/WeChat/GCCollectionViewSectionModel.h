@class NSMutableArray, GCCollectionViewManager;

@interface GCCollectionViewSectionModel : NSObject

@property (retain, nonatomic) NSMutableArray *itemArray;
@property (weak, nonatomic) GCCollectionViewManager *viewManager;

- (void)addSpaceModel:(double)a0;
- (id)init;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (Class)bindSupplyMentaryElementClassOfKind:(id)a0;
- (id)supplyMentaryElementReuseIdentifier:(id)a0;
- (void)appendModel:(id)a0;
- (void)appendModelArray:(id)a0;
- (void)reloadViewManager;
- (void).cxx_destruct;

@end
