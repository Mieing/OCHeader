@class IESLiveRevenueInteractEnlargeActionPanel, NSString, IESLiveMultiLinkerApi, HTSLivePKUserProfileView, UIView;
@protocol IESLiveSubscription;

@interface IESLivePKComponentProfileView : IESLivePKComponent <IESLiveMessageInteractionModuleCommentAction, IESLiveMultiLinkerAnchorActionPanelDelegate>

@property (weak, nonatomic) HTSLivePKUserProfileView *otherProfileView;
@property (retain, nonatomic) UIView *oppoClickView;
@property (retain, nonatomic) UIView *ownerClickView;
@property (nonatomic) double guestOffset;
@property (retain, nonatomic) id<IESLiveSubscription> oppositeGuestSubscription;
@property (retain, nonatomic) id<IESLiveSubscription> oppositeUserSubscription;
@property (retain, nonatomic) IESLiveMultiLinkerApi *api;
@property (retain, nonatomic) IESLiveRevenueInteractEnlargeActionPanel *ownerActionPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)componentContainerFrameChanged;
- (void)kickoutUser:(id)a0;
- (void)openUserCard:(id)a0;
- (void)muteUser:(BOOL)a0 uid:(id)a1;
- (void)followUser:(BOOL)a0 uid:(id)a1;
- (void)onUnfollowClicked;
- (void)specialLayoutInAll:(BOOL)a0 uid:(id)a1 layoutType:(long long)a2;
- (void)clickIntercomComment;
- (void)muteAllUser:(BOOL)a0;
- (void)openTransferPage;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)trackCloseMicButtonClicked;
- (void)componentBusinessPrepare;
- (void)componentInteracting;
- (void)componentDidClear:(BOOL)a0;
- (void)doScreenClearAnimation:(BOOL)a0;
- (void)readyToLoadProfile;
- (void)observeOppositeGuest;
- (void)addTheOtherAnchorProfileView;
- (void)delayToShowProfileView;
- (void)setProfileViewAlpha:(double)a0;
- (void)setOtherProfileViewHidden:(BOOL)a0 withClearMessage:(BOOL)a1;
- (void)addOwnerClickView;
- (void)realDelayShowProfileView;
- (void)didTapOppositeProfileView;
- (void)didTapOppositeVideoView;
- (void)didTapOwnerVideoView;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void).cxx_destruct;

@end
