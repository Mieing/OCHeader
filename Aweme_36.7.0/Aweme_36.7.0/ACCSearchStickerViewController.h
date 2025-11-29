@class UIView, NSString, NSArray, NSMutableDictionary, UIButton, IESInfoStickerResponseModel, ACCSearchBar, UICollectionView;
@protocol ACCLoadingViewProtocol, ACCSearchStickerVCDelegate;

@interface ACCSearchStickerViewController : ACCStickerPannelAnimationVC <UISearchBarDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate>

@property (retain, nonatomic) ACCSearchBar *searchBar;
@property (retain, nonatomic) UIButton *dismissBtn;
@property (retain, nonatomic) UIButton *searchBtn;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) IESInfoStickerResponseModel *recommendModel;
@property (retain, nonatomic) IESInfoStickerResponseModel *searchModel;
@property (copy, nonatomic) NSArray *recommendList;
@property (copy, nonatomic) NSArray *searchList;
@property (nonatomic) BOOL canAutoSearch;
@property (nonatomic) BOOL isLoadingData;
@property (copy, nonatomic) NSString *searchedKeyword;
@property (retain, nonatomic) NSMutableDictionary *downloadingDict;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (weak, nonatomic) id<ACCSearchStickerVCDelegate> delegate;
@property (copy, nonatomic) NSString *uploadFramesURI;
@property (copy, nonatomic) NSString *creationId;
@property (copy, nonatomic) NSString *enterStatus;
@property (nonatomic) BOOL useAutoSearch;
@property (copy, nonatomic) NSArray *filterTags;
@property (nonatomic) unsigned long long numberOfRows;
@property (nonatomic) double itemGap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_dismiss;
- (void)fetchRecommendData:(BOOL)a0;
- (void)fetchSearchData:(id)a0 loadMore:(BOOL)a1;
- (void)p_configLoading:(BOOL)a0;
- (id)p_filterStickerList:(id)a0;
- (void)p_reloadData:(BOOL)a0;
- (void)p_refetchData;
- (id)p_stickerTrackParams:(id)a0 index:(long long)a1;
- (void)p_searchTextBecomeEmpty;
- (void)p_autoSearch;
- (void)p_manullySearch;
- (BOOL)p_shouldFilter:(id)a0 tags:(id)a1;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (id)models;
- (void).cxx_destruct;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;

@end
