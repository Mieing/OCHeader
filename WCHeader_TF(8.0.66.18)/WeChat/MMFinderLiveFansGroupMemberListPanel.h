@class MMFinderLiveFansGroupMemberTableViewModel, UIView, NSString, MMFinderLiveFansGroupMemberLogic, MMFinderLiveFansGroupMemberSelfIntimacyView, MMUIMaskContainerView, MMFinderLiveTaskId, MMUILabel, MMTableView, WCTimeLineFooterView;

@interface MMFinderLiveFansGroupMemberListPanel : MMPageSheetBaseView <MMRefreshTableFooterDelegate, MMFinderLiveFansGroupMemberTableViewDelegate>

@property (nonatomic) long long openMode;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMTableView *fansGroupMemberTableView;
@property (retain, nonatomic) MMUILabel *noMemberTipLabel;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (retain, nonatomic) MMFinderLiveFansGroupMemberTableViewModel *fansGroupMemberTableViewModel;
@property (retain, nonatomic) MMFinderLiveFansGroupMemberLogic *fetchLogic;
@property (retain, nonatomic) MMFinderLiveFansGroupMemberSelfIntimacyView *selfIntimacyView;
@property (retain, nonatomic) MMUIMaskContainerView *tableViewContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 openMode:(long long)a1;
- (void)setupPageSheetConfig;
- (void)createFetchLogic;
- (BOOL)shouldAdaptToDarkLight;
- (id)getCurrentLeftButton;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (double)contentWidth;
- (double)contentHeight;
- (void)layoutSelfIntimacyView;
- (void)layoutFansGroupMemberTableView;
- (id)createFansGroupMemberTableFooterView;
- (void)updateFooterView:(unsigned long long)a0;
- (void)layoutNoMemberTipLabel;
- (void)createNoMemberTipLabel;
- (void)showNoMemberTipLabel;
- (void)hideNoMemberTipLabel;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (id)liveTask;
- (void)refreshFansGroupMemberList;
- (void)leftButtonAction;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void)onFansGroupMemberTableDidScroll;
- (void)onFansGroupMemberTableNeedRefreshWithMemberType:(unsigned long long)a0 groupType:(unsigned long long)a1;
- (unsigned long long)getFilterType;
- (unsigned long long)getSortType;
- (void)reportForPanelExpose;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
