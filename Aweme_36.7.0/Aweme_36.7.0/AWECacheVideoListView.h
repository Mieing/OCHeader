@class NSString, UICollectionView, UICollectionViewFlowLayout, NSMutableArray, AWEListDataController;
@protocol AWECacheVideoListViewDelegate, AWEUserWorkCellViewModelPoolProtocol;

@interface AWECacheVideoListView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (nonatomic) BOOL isPreFetching;
@property (retain, nonatomic) NSMutableArray *selectCacheAwemeModels;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) AWEListDataController *dataController;
@property (nonatomic) BOOL loadPreviousDisable;
@property (retain, nonatomic) id<AWEUserWorkCellViewModelPoolProtocol> viewModelPool;
@property (weak, nonatomic) id<AWECacheVideoListViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)adaptiveValueWithDefault:(double)a0 middle:(double)a1 large:(double)a2;
+ (Class)aAWEPadUserPageAdapterClass;

- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (void)p_addHeaderForCollectionView;
- (void)p_addFooterForCollectionView;
- (void)loadPreviousDataWithCompletion:(id /* block */)a0;
- (id)aAWEPadUserPageAdapter;
- (void)cacheCurrentAwemeModel:(id)a0;
- (void)selectAllAwemeModels;
- (void)cacheVideoSelectModel:(id)a0 indexPath:(id)a1;
- (BOOL)useDefaultCell;
- (id)initWithConfig:(id)a0 dataController:(id)a1 delegate:(id)a2;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (Class)cellClass;
- (void)setupUI;

@end
