@class UIView, NSString, IESLiveLinkMicAudienceListResponse_ListUser, UIImageView, IESLiveGCDTimer, UIButton, NSObject, UILabel;
@protocol OS_dispatch_queue;

@interface IESLiveAudienceInteractiveAnchorInviteFriendCell : UICollectionViewCell <IESLiveAudienceInteractiveAnchorInviteCellAccessibilityProtocol>

@property (retain, nonatomic) UIButton *avatarView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UIImageView *statusIcon;
@property (retain, nonatomic) UIView *invitedMaskView;
@property (retain, nonatomic) IESLiveGCDTimer *invitingTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (copy, nonatomic) NSString *accessibilityText;
@property (retain, nonatomic) IESLiveLinkMicAudienceListResponse_ListUser *userModel;
@property (copy, nonatomic) id /* block */ inviteBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_stopInvitingTimer;
- (BOOL)p_isHasBeenInvited:(id)a0;
- (BOOL)p_isInviting;
- (double)p_restInvitingTime;
- (void)p_startInvitingTimerWithSeconds:(double)a0;
- (BOOL)p_canCalling;
- (void)p_setInviteDisabled:(BOOL)a0;
- (void)p_didTapAvatarView;
- (void)p_changeToEnableStyle;
- (void)p_changeToDisableStyle;
- (void)prepareAccessibility;
- (void)updateWithUser:(id)a0 clickUserBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;

@end
