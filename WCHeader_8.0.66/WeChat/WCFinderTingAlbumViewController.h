@class NSString, WCFinderStreamFooterView, WCFinderTingAlbumViewModel, UICollectionView;

@interface WCFinderTingAlbumViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderTingAlbumViewModelDelegate, WCFinderStreamLayoutDelegate>

@property (retain, nonatomic) WCFinderTingAlbumViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) WCFinderStreamFooterView *footerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataProvider:(id)a0 innerType:(int)a1;
- (void)viewDidLoad;
- (struct CGSize { double x0; double x1; })getItemSize;
- (void)updateNavTitle;
- (id)navigationBarBackgroundColor;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)getStaticCoverConfig;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 cellHeightAtIndexPath:(id)a2 withWidth:(double)a3;
- (double)collectionView:(id)a0 layout:(id)a1 footerHeightAtSection:(unsigned long long)a2;
- (unsigned long long)collectionView:(id)a0 layout:(id)a1 columnCountAtSection:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 cellSpaceAtSection:(unsigned long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)didClickStreamFooterRefresh:(id)a0;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)a0;
- (void)didClickStreamFooterPostFromSnsAction:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)onTingAlbumFetchDataSuc;
- (void).cxx_destruct;

@end
