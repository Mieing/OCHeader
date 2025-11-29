@class AWEProfileHeaderProvidedServiceCollectionView, NSMapTable, NSArray, NSString;
@protocol AWEProfileEACollectionViewEvent;

@interface AWEProfileEACardStyleViewHolder : AWEProfileEABaseViewHolder <UICollectionViewDelegate, UICollectionViewDataSource, AWEProfileEADataSourceEvent>

@property (retain, nonatomic) AWEProfileHeaderProvidedServiceCollectionView *collectionView;
@property (retain, nonatomic) NSMapTable *customWidthMap;
@property (retain, nonatomic) NSArray *cardList;
@property (retain, nonatomic) id<AWEProfileEACollectionViewEvent> collectionViewEventPublisher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cardViewWithCardModel:(id)a0;
- (void)refreshCardList:(id)a0;
- (void)cardDataSourceDidRefresh;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })layoutSize;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (id)indexPathsForVisibleItems;

@end
