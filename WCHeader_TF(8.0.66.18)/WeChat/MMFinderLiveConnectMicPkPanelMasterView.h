@class UIView, UITableViewDiffableDataSource, MMTableView, MMFinderLiveMicInviteAudienceViewModel, NSString, MMFinderLiveTaskId, NSMutableArray, MMFinderLiveConnectMicPkPanelModel, UILabel, MMUIButton;
@protocol MMFinderLiveConnectMicPkPanelMasterViewDelegate;

@interface MMFinderLiveConnectMicPkPanelMasterView : UIView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveConnectMicPkPanelCellDelegate, MMFinderLiveConnectedMicUserCellViewDelegate, MMFinderLiveMicInviteAudienceViewModelDelegate>

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) UITableViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UILabel *pkModeLabel;
@property (retain, nonatomic) UILabel *pkStateLabel;
@property (retain, nonatomic) MMUIButton *leftActionButton;
@property (retain, nonatomic) MMUIButton *rightActionButton;
@property (nonatomic) unsigned long long leftActionType;
@property (nonatomic) unsigned long long rightActionType;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) BOOL canShowInviteAudienceSection;
@property (retain, nonatomic) MMFinderLiveMicInviteAudienceViewModel *inviteAudienceViewModel;
@property (readonly, nonatomic) MMFinderLiveConnectMicPkPanelModel *model;
@property (weak, nonatomic) id<MMFinderLiveConnectMicPkPanelMasterViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 taskId:(id)a1;
- (void)initViews;
- (void)applyDiffSnapshot:(BOOL)a0;
- (void)updateWithModel:(id)a0 animated:(BOOL)a1;
- (void)rebuildDataSourceAndReloadAnimated:(BOOL)a0;
- (void)tryUpdateCanBeInvitedAudienceList;
- (void)updateCanShowInviteAudienceSection:(BOOL)a0;
- (void)fetchCanBeInvitedAudienceList;
- (void)checkAndUpdateAfterMicConditionChanged;
- (BOOL)compareSectionsChangesNeedAnimationWithSections:(id)a0;
- (void)rebuildSectionDataSource;
- (id)buttonWording:(unsigned long long)a0;
- (id)buttonIconName:(unsigned long long)a0;
- (void)layoutSubviews;
- (void)layoutHeader;
- (void)reloadHeader;
- (void)reloadActionButton;
- (void)onLeftAction;
- (void)onRightAction;
- (void)onButtonAction:(unsigned long long)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)audienceApplySeatIntroWithMicUser:(id)a0;
- (BOOL)showAudienceApplicantSeatName;
- (void)onPkPanelCellAccept;
- (void)onPkPanelCellCancel;
- (void)onPkPanelCellQuitMic;
- (void)onPkPanelCellRightButtonAction:(unsigned long long)a0;
- (void)onMMFinderLiveConnectedMicUserCellViewConnectMicToUser:(id)a0;
- (id)liveTask;
- (void)onMMFinderLiveMicInviteAudienceViewModelUserListUpdated;
- (void).cxx_destruct;

@end
