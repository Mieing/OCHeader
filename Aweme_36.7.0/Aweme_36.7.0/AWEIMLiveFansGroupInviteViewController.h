@class AWEIMMessageConversation, NSArray, UIImageView, UIView, UILabel, UIButton;

@interface AWEIMLiveFansGroupInviteViewController : UIViewController

@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UILabel *subTitleLable;
@property (retain, nonatomic) NSArray *list;
@property (retain, nonatomic) UIView *inviteBackgroundView;
@property (retain, nonatomic) UIButton *inviteButtom;
@property (copy, nonatomic) id /* block */ closeBlock;

+ (struct CGSize { double x0; double x1; })getViewSize;
+ (struct CGSize { double x0; double x1; })subTitleSize;
+ (void)inserManagerAndAnnounceNoticeWithCid:(id)a0;
+ (id)subTitleAttributes;
+ (id)subTitle;

- (void)__updateUI;
- (void)__setupUI;
- (void)configWithConversation:(id)a0;
- (void)updateCardViewBackgroundColor:(id)a0;
- (void)__handleCloseButtonCkicked:(id)a0;
- (void)__updateAvatarWithCon:(id)a0;
- (BOOL)__inviteEnable;
- (void)__handelItemsTapGesture:(id)a0;
- (void)__clickedInvite;
- (void)__sendInviteMessageWithUsers:(id)a0;
- (void)__inviteDirectlyWithUsers:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;

@end
