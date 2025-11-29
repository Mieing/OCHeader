@class MMFinderLiveConnectMicAudienceTableViewDataModel, NSArray, MMFinderLiveMicInviteAudienceViewModel, MMFinderLivePaidConnectMicAnchorOperationPanelInfo, UIView, NSString, MMTableView;

@interface MMFinderLiveConnectMicAudienceContainerView : MMFinderLiveConnectMicBaseContainerView <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MMTableViewDelegate, MMFinderLiveMicInviteAudienceViewModelDelegate>

@property (retain, nonatomic) MMFinderLiveConnectMicAudienceTableViewDataModel *tableViewDataModel;
@property (retain, nonatomic) MMTableView *tableView;
@property (nonatomic) double cellDrawingWidth;
@property (retain, nonatomic) UIView *headerContainerView;
@property (nonatomic) BOOL isAudiencePkEnable;
@property (retain, nonatomic) NSArray *connectMicUserList;
@property (retain, nonatomic) NSArray *connectedMicUserList;
@property (retain, nonatomic) NSArray *applyingMicUserList;
@property (retain, nonatomic) MMFinderLiveMicInviteAudienceViewModel *inviteAudienceViewModel;
@property (retain, nonatomic) NSArray *connectedMicUserListForPaidMic;
@property (retain, nonatomic) NSArray *applyingMicUserListForPaidMic;
@property (retain, nonatomic) MMFinderLivePaidConnectMicAnchorOperationPanelInfo *panelInfo;
@property (nonatomic) BOOL isKTVSectionReported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 taskId:(id)a1 isAudiencePkEnable:(BOOL)a2;
- (id)getFinderLiveTask;
- (void)updateTableViewDataModel;
- (void)rebuildUserListForPaidMicWithConnectingUserIfNeeded:(id)a0;
- (void)updateTableViewDataModelAndReload;
- (void)updateWithConnectMicUserList:(id)a0;
- (void)updateConnectingUserList:(id)a0 invalidUserList:(id)a1 invitedMicAudienceDict:(id)a2 recentRemovedUserList:(id)a3;
- (void)updateWithConnectMicUserList:(id)a0 invitedMicAudienceDict:(id)a1;
- (void)updateWithPanelInfo:(id)a0;
- (id)getPanelInfo;
- (void)checkAndUpdateAfterMicConditionChanged;
- (void)scrollListToTopAnimated:(BOOL)a0;
- (void)layoutContentView;
- (void)layoutTableView;
- (void)reloadContent;
- (id)mainScrollView;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 connectMicUserCellAtIndex:(id)a1;
- (BOOL)showApplicantSeatName;
- (id)audienceApplySeatIntroWithMicUser:(id)a0;
- (void)onMMFinderLiveMicInviteAudienceViewModelUserListUpdated;
- (void)updatePanelInfoUserListWithRemovedUserList:(id)a0;
- (BOOL)isPaidConnectMic;
- (void)checkTableViewCellDrawingWidthForPaidConnectMic;
- (void).cxx_destruct;

@end
