@class NSString, UICollectionView, NSMutableSet, AWEUserRecommendHeaderView, AWEUserRecommendCardHorizontalContext;
@protocol AWEUserRecommendTableViewModelProtocol;

@interface AWEUserRecommendCardHorizontalView : UIView <AWEUserRecommendTableViewModelDelegate, UICollectionViewDataSource, UICollectionViewDelegate, AWEUserRecommendCardHorizontalViewProtocol>

@property (retain, nonatomic) AWEUserRecommendHeaderView *headerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) id<AWEUserRecommendTableViewModelProtocol> viewModel;
@property (retain, nonatomic) NSMutableSet *registeredIdentifiers;
@property (retain, nonatomic) AWEUserRecommendCardHorizontalContext *context;
@property (nonatomic) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewModelDidRefresh:(id)a0;
- (void)viewModelDidLoadMore:(id)a0 indexes:(id)a1;
- (void)viewModel:(id)a0 didRemoveModelsAtIndexes:(id)a1;
- (void)viewModel:(id)a0 didInsertModelsAtIndexes:(id)a1;
- (void)viewModel:(id)a0 didUpdateModelsAtIndexes:(id)a1;
- (BOOL)p_enableDelegateFix;
- (id)p_footerViewInCollectionView:(id)a0;
- (void)configWithViewModel:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingSupplementaryView:(id)a1 forElementOfKind:(id)a2 atIndexPath:(id)a3;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
