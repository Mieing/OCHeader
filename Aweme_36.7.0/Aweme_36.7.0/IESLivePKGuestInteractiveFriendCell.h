@class IESLiveLinkMicAudienceListResponse_ListUser, UIImageView, IESLivePKGuestInteractiveFriendCellInviteButton, UILabel, IESLiveGCDTimer, NSObject;
@protocol OS_dispatch_queue;

@interface IESLivePKGuestInteractiveFriendCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) IESLivePKGuestInteractiveFriendCellInviteButton *inviteButton;
@property (retain, nonatomic) UIImageView *statusIcon;
@property (retain, nonatomic) IESLiveGCDTimer *invitingTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (retain, nonatomic) IESLiveLinkMicAudienceListResponse_ListUser *userModel;
@property (copy, nonatomic) id /* block */ inviteBlock;

- (void)initComponents;
- (void)p_setInviteButtonDisabled:(BOOL)a0;
- (void)p_stopInvitingTimer;
- (BOOL)p_isHasBeenInvited:(id)a0;
- (void)realHandleInvite;
- (BOOL)p_isInviting;
- (double)p_restInvitingTime;
- (void)p_startInvitingTimerWithSeconds:(double)a0;
- (BOOL)p_canCalling;
- (void)p_didTapInviteButton;
- (void)updateWithModel:(id)a0 withInviteBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)dealloc;

@end
