@class MMFinderLiveFansGroupAnchorEditViewModel, MMFinderLiveFansGroupAnchorEditFansNoticeInfo, NSArray, MMFinderLiveTaskId, NSString, UITableView;
@protocol MMFinderLiveFansGroupAnchorEditPanelDelegate, MMFinderLiveFansGroupOperationReportDelegate;

@interface MMFinderLiveFansGroupAnchorEditPanel : MMPageSheetBaseView <UITableViewDataSource, UITableViewDelegate, MMFinderLiveFansGroupGiftCustomizationPanelDelegate, MMFinderLiveFansGroupFansNoticeModifyPanelDelegate, MMFinderLiveFansGroupAnchorEditSwitchCellDelegate, MMFinderLiveFansGroupAnchorCardEditPanelDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveFansGroupAnchorEditViewModel *viewModel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MMFinderLiveFansGroupAnchorEditFansNoticeInfo *noticeInfo;
@property (retain, nonatomic) NSArray *sectionTypes;
@property (nonatomic) BOOL cardDebugSwitch;
@property (weak, nonatomic) id<MMFinderLiveFansGroupAnchorEditPanelDelegate> delegate;
@property (weak, nonatomic) id<MMFinderLiveFansGroupOperationReportDelegate> reportDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 viewModel:(id)a1;
- (void)layoutSubviews;
- (void)pageSheetWillAppear;
- (double)calcDetailViewHeight;
- (void)updateContentHeightIfNeeded;
- (void)resetSections;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)giftItemUpdated:(id)a0 byCustomizationPanel:(id)a1;
- (void)fansNoticeModifyPanel:(id)a0 didFinishEditingWithInfo:(id)a1;
- (void)anchorCardEditPanelDidFinishWithVisiblity:(unsigned long long)a0;
- (void)toggleAnchorCardEnabled:(BOOL)a0 visiblity:(unsigned long long)a1;
- (id)currentLiveTask;
- (BOOL)hasCustomGiftSection;
- (BOOL)hasEditFansNoticeSection;
- (BOOL)hasAnchorCardSection;
- (unsigned long long)getCurrentAnchorCardVisibility;
- (unsigned long long)sectionTypeWithIndex:(long long)a0;
- (id)sectionIndexFromType:(unsigned long long)a0;
- (void)setupPageSheetConfig;
- (void)registerReusableComponentsForTableView:(id)a0;
- (void)preloadCustomGiftAnimations;
- (id)groupNameCellWithName:(id)a0 forTableView:(id)a1;
- (id)giftItemCellWithGiftItem:(id)a0 forTableView:(id)a1 withIndexPath:(id)a2;
- (id)fansNoticeCellWithInfo:(id)a0 forTableView:(id)a1 withIndexPath:(id)a2;
- (id)anchorCardCellWithContact:(id)a0 forTableView:(id)a1 withIndexPath:(id)a2;
- (void)configCellCornersAndSepLine:(id)a0 withIndexPath:(id)a1 maxRowCount:(unsigned long long)a2;
- (void)navigateToNameModifyPanel;
- (void)navigateToGiftCustomizationPanelForGift:(id)a0;
- (void)handleSelectFansNoticeEdit;
- (void)handleSelectAnchorCardEdit;
- (void)_doOpenFansNoticeModifyPanel;
- (BOOL)isCurrentNoticeOn;
- (BOOL)isCurrentCardShow;
- (void)handleNoticeSwitchChange:(BOOL)a0 cell:(id)a1;
- (void)handleCardSwitchChange:(BOOL)a0 cell:(id)a1;
- (void)fansGroupAnchorEditSwitchCell:(id)a0 switchValueDidChange:(BOOL)a1;
- (void).cxx_destruct;

@end
