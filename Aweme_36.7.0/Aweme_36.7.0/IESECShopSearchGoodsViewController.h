@class IESECShopSearchContext, NSString, IGListAdapter, UICollectionView, IESECQualityInfoV2;

@interface IESECShopSearchGoodsViewController : UIViewController <IESECCollectionViewLayoutDelegate, IGListDisplayDelegate, IGListAdapterDataSource, UIScrollViewDelegate> {
    BOOL _willFirstSearch;
    BOOL _didFirstSearch;
    BOOL _willFirstRender;
    BOOL _didFirstRender;
}

@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffset;
@property (retain, nonatomic) IESECQualityInfoV2 *qualityInfo;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESECShopSearchContext *searchContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchForKey:(id)a0;
- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (id)ecomEntranceForm;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)showNormalPage;
- (void)loadMoreData;
- (void)showErrorPage;
- (BOOL)loadMoreHasMore;
- (void)endRefreshingWithError:(id)a0;
- (id)collectionView:(id)a0 layoutForSection:(long long)a1;
- (void)addInfiniteScrollView;
- (id)initWithSearchContext:(id)a0;
- (void)refreshDataSourceForKey:(id)a0 withCompletion:(id /* block */)a1;
- (void)refreshDataSourceWhenFilterTypeChangedWithCompletion:(id /* block */)a0;
- (long long)getGoodsCount;
- (void)refreshDataWhenFilterTypeChanged;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)preferredStatusBarStyle;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)refreshData;
- (void)setUpViews;

@end
