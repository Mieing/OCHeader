@class FinderLivePersonalCenterPrepareInfo, FinderLiveRewardQuotaSwitchInfo, NSString, NSMutableArray, MMTableView;

@interface WCFinderLivePersonalCenterMoreFunctionViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource, MMFinderLiveMoreFunctionBaseCellDelegate, WCFinderUserPrepareExt, WCFinderLiveExt, MMLiveRewardQuotaPolicySheetViewDelegate>

@property (retain, nonatomic) MMTableView *mainTableView;
@property (nonatomic) BOOL openRewardLimitNotify;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableArray *privacyItems;
@property (retain, nonatomic) FinderLivePersonalCenterPrepareInfo *info;
@property (retain, nonatomic) FinderLiveRewardQuotaSwitchInfo *rewardSwitchInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInfo:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)getCommentSceneStr;
- (void)initData;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)headerFont;
- (double)headerViewHeight;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)moreFunctionIndexPath:(id)a0 item:(id)a1 isOn:(BOOL)a2;
- (BOOL)getCurrentSwitchFlagWithScene:(int)a0;
- (void)cancelAlertAction;
- (void)clickCloseRecommendLive;
- (void)changeRecommendSceneValue:(int)a0;
- (void)reportEid:(id)a0 isExpose:(BOOL)a1;
- (void)reportEid:(id)a0 isExpose:(BOOL)a1 udfKv:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)updateRecentWatchEnable:(BOOL)a0;
- (void)onMMLiveRewardQuotaPolicySheetViewCancelButtonClicked;
- (void)onMMLiveRewardQuotaPolicySheetViewActionButtonClicked:(unsigned long long)a0 verifyUrl:(id)a1 secverifyId:(id)a2 userInfo:(id)a3;
- (void)finderUserPrepareUpdate:(id)a0;
- (void)onLiveRecentWatchEntranceUpdate:(BOOL)a0;
- (void)reloadData;
- (void)updateRewardAmounSwitch:(BOOL)a0 rewardQuota:(unsigned long long)a1;
- (void)innerUpdateRewardAmounSwitch:(BOOL)a0 rewardQuota:(unsigned long long)a1;
- (double)getHeightForRowAtIndexPath:(id)a0;
- (double)calculateDetailWidthForCellWidth:(double)a0;
- (double)getDetailStringHeightWithItem:(id)a0;
- (double)getTitleStringHeightWithItem:(id)a0;
- (BOOL)canDidSelectWithItem:(id)a0;
- (void).cxx_destruct;

@end
