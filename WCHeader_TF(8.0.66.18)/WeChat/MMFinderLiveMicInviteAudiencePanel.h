@class MMTableView, MMUIActivityIndicatorView, NSString, MMFinderLiveTaskId, UILabel, MMFinderLiveMicInviteAudienceViewModel;
@protocol MMFinderLiveMicInviteAudiencePanelDelegate;

@interface MMFinderLiveMicInviteAudiencePanel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveMicInviteAudienceViewModelDelegate, MMFinderLiveConnectedMicUserCellViewDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveMicInviteAudienceViewModel *viewModel;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) UILabel *noUserLabel;
@property (nonatomic) BOOL showLoading;
@property (weak, nonatomic) id<MMFinderLiveMicInviteAudiencePanelDelegate> actionDelegate;
@property (nonatomic) unsigned long long micIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)liveTask;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)configPageSheetAndDetailView;
- (void)layoutTableView;
- (void)layoutLoadingView;
- (void)layoutNoUserLabel;
- (void)updateViewsHidden;
- (void)showWithAnimated:(BOOL)a0;
- (void)updateListWithInvitedMicAudienceDict:(id)a0 waitConnectAudienceSet:(id)a1 removedAudienceSet:(id)a2;
- (void)updateViewAndReloadTableView;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onMMFinderLiveMicInviteAudienceViewModelUserListUpdated;
- (void)onMMFinderLiveConnectedMicUserCellViewConnectMicToUser:(id)a0;
- (void).cxx_destruct;

@end
