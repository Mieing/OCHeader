@class NSString, NSMutableArray, NSMapTable;
@protocol AWEIMBaseCollectionViewProtocol, AWEIMBaseCollectionViewEventProtocol, AWEIMBaseCollectionViewSessionProtocol;

@interface AWEIMBaseCollectionView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEIMBaseCollectionViewProtocol>

@property (retain) NSMutableArray<AWEIMBaseCollectionViewSessionProtocol> *sessions;
@property (retain, nonatomic) NSMapTable *cellViewModelMap;
@property (weak, nonatomic) id<AWEIMBaseCollectionViewProtocol> collectionViewDelegate;
@property (weak, nonatomic) id<AWEIMBaseCollectionViewEventProtocol> cellDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerCellClass:(Class)a0;
- (id)getSession:(long long)a0;
- (id)viewModelAtIndexPath:(id)a0;
- (void)registerCell:(Class)a0 forViewModel:(Class)a1;
- (id)cellReuseIdentifierWithViewModel:(Class)a0;
- (void)awe_collectionView:(id)a0 beforeConfigCell:(id)a1 atIndexPath:(id)a2;
- (void)awe_collectionView:(id)a0 afterConfigCell:(id)a1 atIndexPath:(id)a2;
- (void)removeAllRegisteredSessions;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)registerSession:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)setup;

@end
