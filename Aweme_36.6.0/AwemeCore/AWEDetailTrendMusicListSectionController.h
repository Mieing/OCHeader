@class AWEDetailTrendMusicListContainerView, NSString, IESServiceProvider, UICollectionView, AWEDetailTrendViewModel;
@protocol AWEDetailMusicListPlayService, AWEDetailTrendTrackerService, AWEDetailMusicListViewModelProtocol, AWEDetailTrendMusicListConfiguration;

@interface AWEDetailTrendMusicListSectionController : IGListSectionController <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate, AWEDetailTrendMusicItemCellDelegate>

@property (retain, nonatomic) id<AWEDetailTrendMusicListConfiguration> contentConfiguration;
@property (retain, nonatomic) AWEDetailTrendMusicListContainerView *containerView;
@property (retain, nonatomic) UICollectionView *contentCollectionView;
@property (retain, nonatomic) IESServiceProvider *provider;
@property (retain, nonatomic) id<AWEDetailMusicListViewModelProtocol> musicListViewModel;
@property (weak, nonatomic) AWEDetailTrendViewModel *trendViewModel;
@property (weak, nonatomic) id<AWEDetailMusicListPlayService> musicListPlayService;
@property (weak, nonatomic) id<AWEDetailTrendTrackerService> trendTrackerService;
@property (nonatomic) BOOL isFromSkeleton;
@property (nonatomic) BOOL everHorizontalScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)bindViewModel;
- (void)didUpdateToObject:(id)a0;
- (void)didTapCoverImageWithCell:(id)a0 sender:(id)a1;
- (void)didTapPlayImageWithCell:(id)a0 sender:(id)a1;
- (void)didTapMusicTitleWithCell:(id)a0 sender:(id)a1;
- (void)didTapMusicAuthorInfoWithCell:(id)a0 sender:(id)a1;
- (void)didTapMusicInfoAreaViewWithCell:(id)a0 sender:(id)a1;
- (void)didTapLunaUGButtonWithCell:(id)a0 sender:(id)a1;
- (void)didTapCollectMusicButtonWithCell:(id)a0 sender:(id)a1;
- (void)didTapLunaAppendPlaylistButtonWithCell:(id)a0 sender:(id)a1;
- (void)trackMusicListViewDidAppearIfNeeded;
- (long long)numberOfItems;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithServiceProvider:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
