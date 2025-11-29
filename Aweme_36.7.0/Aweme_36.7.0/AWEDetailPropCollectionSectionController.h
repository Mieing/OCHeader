@class NSString, AWEDetailPropViewModel, UICollectionView, AWEDetailPropCollectionModel, UIView;
@protocol AWEDetailPropCollectionConfiguration;

@interface AWEDetailPropCollectionSectionController : IGListSectionController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) AWEDetailPropViewModel *stateContext;
@property (retain, nonatomic) id<AWEDetailPropCollectionConfiguration> contentConfiguration;
@property (retain, nonatomic) AWEDetailPropCollectionModel *object;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UICollectionView *contentCollectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithServiceProvider:(id)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
