@class HTSLiveUser, IESLiveRevenueInteractEnlargeActionPanel, NSString, IESLiveMultiLinkerApi, UIView, IESLiveIntercomCommentEntranceView;
@protocol IESLiveCompoundSubscription;

@interface IESLiveRevenueInteractLynxEventComponent : IESLivePKComponent <IESLiveMultiLinkerAnchorActionPanelDelegate>

@property (retain, nonatomic) UIView *ownerClickView;
@property (retain, nonatomic) UIView *oppoClickView;
@property (retain, nonatomic) IESLiveMultiLinkerApi *api;
@property (retain, nonatomic) HTSLiveUser *userModel;
@property (retain, nonatomic) IESLiveRevenueInteractEnlargeActionPanel *ownerActionPanel;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (nonatomic) BOOL shouldSkipConfirm;
@property (retain, nonatomic) IESLiveIntercomCommentEntranceView *intercomCommentEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindAction;
- (void)componentContainerFrameChanged;
- (void)kickoutUser:(id)a0;
- (void)openUserCard:(id)a0;
- (void)muteUser:(BOOL)a0 uid:(id)a1;
- (void)followUser:(BOOL)a0 uid:(id)a1;
- (void)showCloseMicPanel;
- (void)onUnfollowClicked;
- (void)tapFollowButton:(id)a0;
- (void)specialLayoutInAll:(BOOL)a0 uid:(id)a1 layoutType:(long long)a2;
- (void)clickIntercomComment;
- (void)muteAllUser:(BOOL)a0;
- (void)openTransferPage;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)trackCloseMicButtonClicked;
- (void)handleCloseMicInChorusState;
- (void)monitorClickCloseMicButton:(BOOL)a0;
- (void)onReceivedPKLynxEvent:(long long)a0 extraParams:(id)a1;
- (void)componentInteracting;
- (void)onClickCloseMicButton;
- (void)showCloseMicToast;
- (void)loadIntercomCommentButton;
- (void)addOwnerClickView;
- (void)didTapOppositeProfileView;
- (void)didTapOppositeVideoView;
- (void)didTapOwnerVideoView;
- (void)addOppoClickView;
- (void).cxx_destruct;
- (void)clean;

@end
