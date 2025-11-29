@class MMTableView, UIView, MMFinderLiveOnlineUserProfileView, NSData, MMFinderLiveTask, NSString, MMLoadingView, NSMutableArray, MMUILabel, MMUIButton, WCTimeLineFooterView;

@interface WCFinderLivePaymentStatViewController : MMCPUIViewController <MMFinderLivePaymentRecordCellDelegate, UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate>

@property (retain, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) UIView *statisticsView;
@property (retain, nonatomic) MMUILabel *statAudienceTitleLabel;
@property (retain, nonatomic) MMUILabel *audienceHeaderTitleLabel;
@property (retain, nonatomic) MMUILabel *wecoinHeaderTitleLabel;
@property (retain, nonatomic) MMUILabel *totalAudienceCountLabel;
@property (retain, nonatomic) MMUIButton *introductionButton;
@property (retain, nonatomic) MMLoadingView *loadingView;
@property (retain, nonatomic) MMUILabel *emptyTitleLabel;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (retain, nonatomic) MMTableView *paymentRecordsTableView;
@property (retain, nonatomic) MMFinderLiveOnlineUserProfileView *profileView;
@property (retain, nonatomic) NSMutableArray *paymentInfoList;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long heatValue;
@property (nonatomic) unsigned int totalNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveTask:(id)a0;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushed:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (BOOL)useTransparentNavibar;
- (void)setupUI;
- (void)setupData;
- (void)layoutContentView;
- (void)onBackButtonClicked:(id)a0;
- (void)cashOut:(id)a0;
- (void)onIntroductionButtonClick;
- (void)onLiveGiftGainRecordCellHeadImageClicked:(id)a0;
- (void)reloadData;
- (void)fetchRewardGainsInfoList;
- (void)showProfileView:(id)a0 liveContact:(id)a1;
- (void)gotoChatViewVCWithContact:(id)a0 contactExtInfo:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onGetFinderContact:(id)a0 contact:(id)a1;
- (void).cxx_destruct;

@end
