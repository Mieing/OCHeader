@class NSString, WCFinderStreamFooterView, NSMutableSet, UILabel;

@interface WCFinderStreamProfileDraftPage : WCFinderStreamProfileViewPage <UICollectionViewDelegate, UICollectionViewDataSource, WCFinderStreamLayoutDelegate, WCFinderProfileDraftListViewModelDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderProfileMusicViewDelegate, WCFinderLocalDraftCollectionViewCellDelegate>

@property (weak, nonatomic) WCFinderStreamFooterView *footerView;
@property (retain, nonatomic) UILabel *statusTips;
@property (retain, nonatomic) NSMutableSet *exposeCellIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)loadView;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)openFinderEditor:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 cellEdgeInsetAtSection:(unsigned long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 cellHeightAtIndexPath:(id)a2 withWidth:(double)a3;
- (double)collectionView:(id)a0 layout:(id)a1 headerHeightAtSection:(unsigned long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 footerHeightAtSection:(unsigned long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 headerEdgeInsetAtSection:(unsigned long long)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)didClickStreamFooterRefresh:(id)a0;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)a0;
- (void)viewModelDataChanged:(id)a0;
- (void)viewModelTargetIndexChanged:(long long)a0 localDraft:(id)a1;
- (void)viewModel:(id)a0 fetchDataError:(id)a1;
- (void)viewModel:(id)a0 deleteItemAtIdx:(long long)a1;
- (BOOL)reloadDataWithBatchModify;
- (void)reloadCollectionView;
- (void)updateStatusWithHasError:(BOOL)a0;
- (void)updateStatusTips:(BOOL)a0;
- (void)onTagRetry;
- (id)hostVC;
- (void)finderLocalDraftCollectionViewCellDidDeleteDraft:(id)a0 draftModel:(id)a1;
- (void)onMusicViewDidSlideDelete:(id)a0 feedVM:(id)a1;
- (void)onMusicViewDidClickRetry:(id)a0 feedVM:(id)a1;
- (void)onMusicViewDidClickDelete:(id)a0 feedVM:(id)a1;
- (void)onMusicView:(id)a0 exposeMenuAction:(id)a1 feedVM:(id)a2;
- (BOOL)checkLongVideoFileValid:(id)a0;
- (void).cxx_destruct;

@end
