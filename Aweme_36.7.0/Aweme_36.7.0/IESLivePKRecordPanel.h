@class UIView, IESLiveEmptyView, IESLivePKRecordViewModel, IESLiveTableViewCellDisplayTrackHelper, NSString, UIImageView, NSAttributedString, UITableView, IESLiveSegmentedControl, HTSLiveRoom, UIScrollView;
@protocol IESLiveRevenueInteractEntranceProvider, IESLiveSubscription;

@interface IESLivePKRecordPanel : IESLiveRevenueInteractPopupViewController <UITableViewDelegate, UITableViewDataSource, IESLiveRefreshDelegate, UIScrollViewDelegate, IESLiveTableViewCellDisplayTrackHelperDelegate>

@property (weak, nonatomic) id<IESLiveRevenueInteractEntranceProvider> entranceProvider;
@property (retain, nonatomic) IESLivePKRecordViewModel *viewModel;
@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (retain, nonatomic) IESLiveSegmentedControl *segControl;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIImageView *assistImageView;
@property (nonatomic) BOOL showConsecutiveWin;
@property (nonatomic) long long showConsecutiveWinIndex;
@property (retain, nonatomic) IESLiveSegmentedControl *pkRecordSegControl;
@property (retain, nonatomic) UIView *pkRecordView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) IESLiveEmptyView *emptyView;
@property (nonatomic) unsigned long long pkRecordType;
@property (retain, nonatomic) IESLiveTableViewCellDisplayTrackHelper *tableViewTrackHelper;
@property (retain, nonatomic) IESLiveSegmentedControl *reserveRecordSegControl;
@property (retain, nonatomic) UIView *reserveRecordView;
@property (retain, nonatomic) UITableView *reserveRecordTableView;
@property (retain, nonatomic) IESLiveEmptyView *reserveRecordEmptyView;
@property (retain, nonatomic) IESLiveTableViewCellDisplayTrackHelper *reserveTableViewTrackHelper;
@property (copy, nonatomic) NSString *activityName;
@property (copy, nonatomic) NSAttributedString *activityText;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) HTSLiveRoom *room;
@property (nonatomic) long long recordTypeToMove;
@property (nonatomic) unsigned long long reserveRecordType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)bindAction;
- (void)scrollView:(id)a0 willBeginRefreshWithRefreshType:(unsigned long long)a1;
- (id)scrollView:(id)a0 viewForRefreshWithRefreshType:(unsigned long long)a1 refreshState:(unsigned long long)a2;
- (double)scrollView:(id)a0 heightForRefreshViewWithRefreshType:(unsigned long long)a1 refreshState:(unsigned long long)a2;
- (void)onSetupNavBar:(id)a0;
- (void)setupNormalContentView;
- (BOOL)trackDisplayedCellWithIndexPath:(id)a0;
- (void)updateFeedbackTendencyWith:(id)a0 userInfo:(id)a1;
- (void)trackPKRecordPanel;
- (void)trackBattleReserveRecordPanel;
- (void)setupNormalSegControl:(id)a0;
- (void)setupLayout:(id)a0;
- (void)showEmptyView:(id)a0 forType:(long long)a1;
- (void)trackForTabClick:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;

@end
