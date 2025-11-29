@class AWEIMMessage, UIImageView, IESIMButton, UILabel, UIView, NSString;

@interface AWEIMCloseFriendInviteCardView : UIView

@property (retain, nonatomic) UIImageView *inviteIcon;
@property (retain, nonatomic) UIView *avatarContainerView;
@property (retain, nonatomic) UIImageView *leftHandIcon;
@property (retain, nonatomic) UIImageView *rightHandIcon;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIView *avatarBGView;
@property (retain, nonatomic) UIImageView *subavatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *subtitleIcon;
@property (retain, nonatomic) IESIMButton *confirmBtn;
@property (retain, nonatomic) AWEIMMessage *message;
@property (copy, nonatomic) NSString *peerUserID;

- (void)p_initSubview;
- (void)configCardWithViewModel:(id)a0 conversation:(id)a1;
- (void)coverTapped;
- (void)p_configApproveCardWithMessage:(id)a0 inConversation:(id)a1;
- (void)p_configInviteCardWithMessage:(id)a0 inConversation:(id)a1;
- (void)p_createAvatarContainerViewIfNeeded;
- (void)p_createInviteIconIfNeeded;
- (void)p_didClickBtn:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clearContent;

@end
