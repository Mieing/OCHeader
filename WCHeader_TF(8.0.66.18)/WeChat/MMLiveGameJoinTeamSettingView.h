@class MMTableView, OrderedDictionary, NSString, MMFinderLiveTaskId, UIView, MMUIButton, MMUILabel;
@protocol MMLiveGameJoinTeamSettingViewDelegate;

@interface MMLiveGameJoinTeamSettingView : MMPageSheetBaseView <UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *topAreaView;
@property (retain, nonatomic) MMUIButton *leftButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMTableView *joinTeamModeTableView;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) OrderedDictionary *joinTeamQualifications;
@property (nonatomic) unsigned int lastJoinTeamMode;
@property (nonatomic) unsigned int curJoinTeamMode;
@property (nonatomic) unsigned int curCoinValue;
@property (weak, nonatomic) id<MMLiveGameJoinTeamSettingViewDelegate> operationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (id)initWithTaskId:(id)a0 curJoinTeamMode:(unsigned int)a1 curCoinValue:(unsigned int)a2;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)initDefaultData;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (void)setExtraCellLineHidden:(id)a0;
- (void)leftButtonAction;
- (void)showChooseCoinView;
- (void)showWithAnimated:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)getCurrentLeftButton;
- (id)liveTask;
- (void)onGetFinderLiveMessage:(id)a0 taskId:(id)a1 onlineContacts:(id)a2 msgList:(id)a3 finderLiveInfo:(id)a4 onlineCount:(unsigned int)a5 liveInfoEnable:(BOOL)a6 liveClosed:(BOOL)a7 liveExtFlag:(unsigned int)a8 onlineViewCount:(unsigned int)a9 ktvPlayerCount:(unsigned int)a10 nextRequestInterval:(unsigned int)a11 currentLikeCount:(unsigned long long)a12 extraClientConfigUpdated:(BOOL)a13 liveGameData:(id)a14 respContext:(id)a15;
- (void).cxx_destruct;

@end
