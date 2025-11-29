@class NSString;
@protocol AWEIMStrangerCollectionViewCustomDelegate;

@interface AWEIMStrangerCollectionView : AWEIMBaseCollectionView <AWEIMStrangerCollectionViewProtocol>

@property (weak, nonatomic) id<AWEIMStrangerCollectionViewCustomDelegate> customDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_collectionView:(id)a0 beforeConfigCell:(id)a1 atIndexPath:(id)a2;
- (void)awe_collectionView:(id)a0 afterConfigCell:(id)a1 atIndexPath:(id)a2;
- (BOOL)enableShowOlderHeaderView;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
