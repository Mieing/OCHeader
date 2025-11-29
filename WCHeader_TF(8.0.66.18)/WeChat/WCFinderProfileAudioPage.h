@class WCFinderStreamFooterView, NSString;

@interface WCFinderProfileAudioPage : WCFinderStreamProfileViewPage <WCFinderProfileAudioPageModelDelegate, UICollectionViewDelegate, UICollectionViewDataSource, WCFinderStreamLayoutDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderProfileAudioSectionExt, WCFinderProfilePlaylistCellDataSource, WCFinderStreamLoadingStateDelegate, WCFinderProfileAudioPostTabCellDelegate, WCFinderProfileAudioFullPostViewCellDelegate, WCFinderProfileAudioFullPostViewCellDataSource>

@property (weak, nonatomic) WCFinderStreamFooterView *footerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setViewModel:(id)a0;
- (void)dealloc;
- (id)loadView;
- (void)audioPageModelDataChanged:(id)a0;
- (void)viewDidLoad;
- (void)viewWillApear;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)isSectionAudioListAppendMoreSecs;
- (BOOL)shouldShowCountForSection:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (unsigned long long)collectionView:(id)a0 layout:(id)a1 columnCountAtSection:(unsigned long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 cellHeightAtIndexPath:(id)a2 withWidth:(double)a3;
- (double)collectionView:(id)a0 layout:(id)a1 headerHeightAtSection:(unsigned long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 footerHeightAtSection:(unsigned long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 cellEdgeInsetAtSection:(unsigned long long)a2;
- (void)updateFooterView;
- (void)didClickStreamFooterRefresh:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (long long)numberOfPlayListCell:(id)a0;
- (struct WCFinderProfilePlaylistItem { Class x0; id /* block */ x1; })playListCell:(id)a0 itemAtIndex:(long long)a1;
- (void)playListCell:(id)a0 onClickCellAtIndex:(long long)a1;
- (void)onClickAllAudio:(id)a0;
- (void)onClickAllCollection:(id)a0;
- (void)onLoadingStateChanged:(id)a0;
- (void)profileAudioSectionDataChanged;
- (void)onProfileAudioFullPostViewClicked:(id)a0;
- (double)getScrollViewOriginY30percent:(id)a0;
- (double)originY30percent;
- (void)onProfileAudioPostTabSelectPost:(id)a0;
- (void)onProfileAudioPostTabSelectManage:(id)a0;
- (void)onLaunchPostAudioLiteApp;
- (void)onLaunchManageMusicLiteApp;
- (void)onReceiveAudioEventRefreshList;
- (void).cxx_destruct;

@end
