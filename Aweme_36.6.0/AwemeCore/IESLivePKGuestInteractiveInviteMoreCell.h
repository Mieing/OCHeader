@class UILabel, UIButton;

@interface IESLivePKGuestInteractiveInviteMoreCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *inviteMoreBtn;
@property (nonatomic) BOOL disableButtonClick;
@property (copy, nonatomic) id /* block */ didClickInviteMore;

- (void)didTapInviteMoreButton;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
