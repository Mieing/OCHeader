@class AWERecordBeautyResetAllButton, NSString, NSMutableSet, AWERecordBeautyBackButton;

@interface AWERecordBeautyContentItemViewController : AWERecordBeautyContentViewController

@property (nonatomic) BOOL shouldShowBackButton;
@property (copy, nonatomic) NSString *resetTitle;
@property (retain, nonatomic) AWERecordBeautyBackButton *backButton;
@property (retain, nonatomic) AWERecordBeautyResetAllButton *resetAllBeautyButton;
@property (retain, nonatomic) NSMutableSet *trackNodeIds;

- (void)showResetButton;
- (BOOL)isEnableRecordBeautyAddStyleEffectSwitchStatus;
- (id)effectContext;
- (void)updateSelectedStateWithCell:(id)a0 cellModel:(id)a1;
- (void)updatePhotoWithCell:(id)a0 cellModel:(id)a1;
- (void)updateTitleWithCell:(id)a0 cellModel:(id)a1;
- (void)updateDotIndicatorHiddenStateWithCell:(id)a0 cellModel:(id)a1;
- (void)updateGrayedOutStatusWithCell:(id)a0 cellModel:(id)a1;
- (void)updateDownloadStatusWithCell:(id)a0 cellModel:(id)a1;
- (void)updateSplitlineStatusWithCell:(id)a0 cellModel:(id)a1;
- (void)trackItemWithCellModel:(id)a0;
- (BOOL)isAppliedStatusWithNodeId:(id)a0;
- (BOOL)isResponseIfNeededWithCellModel:(id)a0;
- (void)didSelectStyleNodeWithCellModel:(id)a0 didSelectBeautyCellAtIndexPath:(id)a1;
- (void)didSelectOffNodeWithCellModel:(id)a0;
- (void)didSelectOtherNodeWithCellModel:(id)a0 indexPath:(id)a1;
- (void)applyItemWithCellModel:(id)a0;
- (void)didSelectStyleMoreNodeWithCellModel:(id)a0;
- (void)didSelectLeafNodeWithCellModel:(id)a0 didSelectBeautyCellAtIndexPath:(id)a1;
- (void)didSelectChildNodeByLeafNodeWithCellModel:(id)a0;
- (void)applyChildItemWithCellItem:(id)a0;
- (void)navigateToChildItemsPageWithCellItem:(id)a0;
- (void)markShouldShowBackButton;
- (void)p_handleTapBackButton:(id)a0;
- (void)setupNav;
- (unsigned long long)contentVcType;
- (void)collectionView:(id)a0 didSelectBeautyCellAtIndexPath:(id)a1 cellModel:(id)a2;
- (void)changeResetButtonEnabledState:(BOOL)a0;
- (void)updateGuideBubbleWithCell:(id)a0 cellModel:(id)a1;
- (void)p_didTapResetButton;
- (void)trackerOffNode:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupCollectionView;

@end
