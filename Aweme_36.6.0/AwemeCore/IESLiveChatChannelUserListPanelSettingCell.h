@class UIStackView, UIImageView, UILabel, UIView;

@interface IESLiveChatChannelUserListPanelSettingCell : IESLiveChatChannelUserListPanelBaseCell

@property (retain, nonatomic) UIView *settingButtonContainer;
@property (retain, nonatomic) UIImageView *settingIcon;
@property (retain, nonatomic) UILabel *settingLabel;
@property (retain, nonatomic) UIView *inviteButtonContainer;
@property (retain, nonatomic) UIImageView *inviteIcon;
@property (retain, nonatomic) UILabel *inviteLabel;
@property (retain, nonatomic) UIView *announcementButtonContainer;
@property (retain, nonatomic) UIImageView *announcementIcon;
@property (retain, nonatomic) UILabel *announcementLabel;
@property (retain, nonatomic) UIStackView *buttonContainer;

- (void)reloadWithCellModel:(id)a0;
- (void)settingButtonDidClicked:(id)a0;
- (void)inviteButtonDidClicked:(id)a0;
- (void)announcementButtonDidClicked:(id)a0;
- (void)layoutTopBottomContentButton:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setup;

@end
