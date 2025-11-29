@class MMFinderLiveReservedRecordViewModel, FinderLivePersonalCenterPrepareInfo, WCTimeLineFooterView, NSString, UILabel, MMFinderLiveBuyTicketHandle, MMTableView;

@interface WCFinderReservedRecordViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate, MMFinderLiveNoticeInfoCellDelegate, MMFinderLiveReservedRecordNoticeInfoCellDelegate, MMFinderLiveReservedRecordNextLiveCellDelegate, MMFinderLiveNoticeDetailsViewControllerDelegate, MMFinderLiveReservedRecordViewModelDelegate>

@property (retain, nonatomic) MMTableView *reservedRecordTableView;
@property (retain, nonatomic) FinderLivePersonalCenterPrepareInfo *info;
@property (retain, nonatomic) MMFinderLiveReservedRecordViewModel *reservedRecordViewModel;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (retain, nonatomic) MMFinderLiveBuyTicketHandle *ticketHandle;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (copy, nonatomic) id /* block */ onReserved;
@property (copy, nonatomic) id /* block */ onRequireBecomeMemberBeforeReserveNotice;
@property (copy, nonatomic) id /* block */ onRequireRotatePortrait;
@property (copy, nonatomic) id /* block */ onRequireRecoverOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidBePushed:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)layoutContentView;
- (void)reloadData;
- (void)setupTableView;
- (void)setupData;
- (void)setupUI;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)showEmptyView;
- (void)hideEmptyView;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onLiveReservedRecordUpdate:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void)onReservedRecordViewModelStartFetching;
- (void)onReservedRecordViewModelUpdated:(BOOL)a0 hasMoreData:(BOOL)a1;
- (void)noticeInfoCellDidViewNotice:(id)a0;
- (void)noticeInfoCellDidChangeReservation:(id)a0;
- (void)onMMLiveReservedRecordAnchorInfoClicked:(id)a0;
- (void)gotoFinderBrandLiveSubscribeProfile:(id)a0;
- (void)onClickFreeLiveNoticeView:(id)a0 anchorContact:(id)a1;
- (void)onClickNeedPayLiveNoticeView:(id)a0 anchorContact:(id)a1;
- (void)actionForReserveNoticeInfo:(id)a0 anchorContact:(id)a1;
- (void)showConfirmAlertForCancellingReserveNoticeInfo:(id)a0 anchorContact:(id)a1;
- (void)reserveNoticeInfo:(id)a0 anchorContact:(id)a1;
- (void)presentConcertTicketForNoticeInfo:(id)a0;
- (void)closeTicketHandle:(BOOL)a0;
- (void)cancelReservingNoticeInfo:(id)a0 anchorContact:(id)a1;
- (void)checkAndPresentConcertTicketForNoticeInfo:(id)a0;
- (void)nextLiveNoticeCellDidChangeReservation:(id)a0;
- (void)reserveNextLiveNotice:(id)a0 anchorContact:(id)a1;
- (void)realReserveNextLiveWithNoticeView:(id)a0 isReserve:(BOOL)a1 anchorContact:(id)a2;
- (void)onNextLiveNoticeChanged:(id)a0 forAnchor:(id)a1;
- (void).cxx_destruct;

@end
