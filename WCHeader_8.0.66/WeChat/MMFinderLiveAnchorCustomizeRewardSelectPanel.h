@class NSString, MMFinderLiveTaskId, MMFinderLiveAnchorCustomizeRewardViewModel, MMFinderLiveAnchorCustomizeRewardModifyPanel, UITableView;

@interface MMFinderLiveAnchorCustomizeRewardSelectPanel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveAnchorCustomizeRewardViewModelDelegate, MMFinderLiveFansGroupGiftCustomizationPanelDelegate, MMFinderLiveAnchorCustomizeRewardModifyPanelDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) UITableView *rewardListTableView;
@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardViewModel *viewModel;
@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardModifyPanel *anchorCustomizeRewardModifyPanel;
@property (copy, nonatomic) id /* block */ didDismissCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)initPageSheetConfig;
- (void)initDetailView;
- (void)initReusableComponentsForTableView;
- (void)initViewModel;
- (double)contentWidth;
- (double)contentHeight;
- (double)giftItemRowHeight;
- (void)showWithAnimated:(BOOL)a0;
- (long long)customizeRewardItemsCount;
- (unsigned long long)getCustomizeRewardItemTypeAtIndex:(long long)a0;
- (id)getFansGroupCustomizeRewardItemAtIndex:(long long)a0;
- (id)getAnchorCustomizeRewardItemAtIndex:(long long)a0;
- (void)onCustomizeRewardDataFetchingBegin;
- (void)onCustomizeRewardDataFetchingEndWithErrorMsg:(id)a0;
- (void)giftItemUpdated:(id)a0 byCustomizationPanel:(id)a1;
- (void)onAnchorCustomizeRewardModifyPanelDismiss;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)createFansGroupCustomizeRewardCellWithTableView:(id)a0 index:(long long)a1;
- (void)configurationFansGroupCustomizeRewardCell:(id)a0 atIndex:(long long)a1;
- (id)createAnchorCustomizeRewardCellWithTableView:(id)a0 index:(long long)a1;
- (void)configurationAnchorCustomizeRewardCell:(id)a0 atIndex:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)navigateToFansGroupCustomizeRewardPanelForItem:(id)a0;
- (void)navigateToAnchorCustomizeRewardModifyPanelForItem:(id)a0;
- (void)pageSheetDidDismiss;
- (void).cxx_destruct;

@end
