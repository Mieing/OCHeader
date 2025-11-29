@class NSString;

@interface WCFinderMusicPlaylistTabPage : WCFinderStreamProfileViewPage <UICollectionViewDelegate, UICollectionViewDataSource, WCFinderProfilePlaylistCellDataSource, WCFinderStreamFooterViewActionDelegate, WCFinderStreamLayoutDelegate, WCFinderStreamProfileMusicPlaylistDelegate, WCFinderProfileMusicFullPostViewCellDelegate, WCFinderProfileMusicPostTabCellDelegate, WCFinderCarouselDatasource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)loadView;
- (void)dealloc;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)isMoreCellAtIndexPath:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)bindHeaderMoreSDKReport:(id)a0 view:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)_onClickPlayList:(id)a0;
- (unsigned long long)collectionView:(id)a0 layout:(id)a1 columnCountAtSection:(unsigned long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 cellEdgeInsetAtSection:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 cellSpaceAtSection:(unsigned long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 headerHeightAtSection:(unsigned long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 footerHeightAtSection:(unsigned long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 cellHeightAtIndexPath:(id)a2 withWidth:(double)a3;
- (long long)numberOfPlayListCell:(id)a0;
- (struct WCFinderProfilePlaylistItem { Class x0; id /* block */ x1; })playListCell:(id)a0 itemAtIndex:(long long)a1;
- (void)playListCell:(id)a0 onClickCellAtIndex:(long long)a1;
- (void)onClickMoreCell:(id)a0;
- (void)onPlayListClickMore:(id)a0;
- (void)onPlayListBeginFetchData:(id)a0;
- (void)onPlayList:(id)a0 onLoadSuccess:(BOOL)a1;
- (long long)numbersForCarousel:(id)a0;
- (void)onProfileMusicFullPostViewClicked:(id)a0;
- (void)onProfileMusicPostTabSelectPostMusic:(id)a0;
- (void)onProfileMusicPostTabSelectManageMusic:(id)a0;
- (void)onLaunchPostMusicLiteApp;
- (void)onLaunchManageMusicLiteApp;
- (void)onReceiveMusicEventRefreshList;
- (id)viewForCarousel:(id)a0 indexPath:(id)a1 index:(long long)a2;

@end
