@class FinderLiveRewardQuotaSwitchInfo, NSString, OrderedDictionary, MMTableView;

@interface WCFinderLivePersonalCenterRewardNoticeAmountViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMTableView *rewardQuotaOptionTableView;
@property (retain, nonatomic) OrderedDictionary *rewardQuotaOptions;
@property (nonatomic) unsigned long long curRewardQuota;
@property (retain, nonatomic) FinderLiveRewardQuotaSwitchInfo *info;
@property (copy, nonatomic) id /* block */ onVCWillPop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRewardQuotaSwitchInfo:(id)a0;
- (void)viewDidLoad;
- (void)viewWillBePoped:(BOOL)a0;
- (void)initUI;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
