@class UIButton, UIStackView, UIImageView, IESLiveLinkMicAudienceListResponse_ListUser, UILabel, UIView;

@interface IESLivePKGuestInteractiveInviteCell : UITableViewCell

@property (retain, nonatomic) IESLiveLinkMicAudienceListResponse_ListUser *userModel;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *fantickLabel;
@property (retain, nonatomic) UIView *operatorRoleView;
@property (retain, nonatomic) UIButton *inviteButton;
@property (retain, nonatomic) UIImageView *genderIcon;
@property (copy, nonatomic) id /* block */ tapInviteBlock;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) UIImageView *indicateImageView;
@property (retain, nonatomic) UIStackView *tagContainer;

- (void)removeAllTagViews;
- (void)didTapInviteButton;
- (void)realHandleInvite;
- (void)updateWithModel:(id)a0 tapInviteBlock:(id /* block */)a1 scene:(unsigned long long)a2 showFanticket:(BOOL)a3;
- (void)setInviteButtonDisabled:(BOOL)a0;
- (void)updateWithModel:(id)a0 isAnchor:(BOOL)a1;
- (void)updateWithModel:(id)a0 tapInviteBlock:(id /* block */)a1 scene:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutUI;

@end
