@class UIStackView, IESLiveInteractionListUserTagView, UIImageView, IESLiveAudienceInteractiveInfoView, IESLiveLinkMicAudienceListResponse_ListUser, UILabel, UIButton;

@interface IESLiveAudienceInteractiveInviteCell : UITableViewCell

@property (retain, nonatomic) IESLiveLinkMicAudienceListResponse_ListUser *userModel;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *fantickLabel;
@property (retain, nonatomic) UIButton *inviteButton;
@property (retain, nonatomic) UIImageView *genderIcon;
@property (copy, nonatomic) id /* block */ tapInviteBlock;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) UIStackView *tagContainer;
@property (retain, nonatomic) IESLiveInteractionListUserTagView *invitationTagView;
@property (retain, nonatomic) IESLiveAudienceInteractiveInfoView *infoView;

- (void)updateAttributedString:(id)a0;
- (void)removeAllTagViews;
- (void)didTapInviteButton;
- (void)updateWithModel:(id)a0 tapInviteBlock:(id /* block */)a1 scene:(unsigned long long)a2 showFanticket:(BOOL)a3;
- (void)setInviteButtonDisabled:(BOOL)a0;
- (void)updateWithModel:(id)a0 tapInviteBlock:(id /* block */)a1 scene:(unsigned long long)a2;
- (void)p_showUserProfile:(id)a0;
- (void)makeUserProfileAvailable;
- (void)showOnlineStatus;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutUI;

@end
