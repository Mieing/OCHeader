@class UICollectionView;

@interface WCFinderProfileOverviewCollectionCellRegister : NSObject

@property (retain, nonatomic) UICollectionView *collectionView;

+ (id)newWithCollectionView:(id)a0;

- (void)registerCell:(Class)a0;
- (void)registerFooter:(Class)a0 identifier:(id)a1;
- (void)registerHeader:(Class)a0 identifier:(id)a1;
- (void).cxx_destruct;

@end
