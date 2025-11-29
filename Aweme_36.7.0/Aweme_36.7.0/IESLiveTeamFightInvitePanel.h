@class UIImageView, UILabel, HTSLiveUser;

@interface IESLiveTeamFightInvitePanel : UIView

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) long long seatIndex;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ inviteBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 user:(id)a1 block:(id /* block */)a2 DIContext:(id)a3;
- (void)didTapInviteJoinTeamButton:(id)a0;
- (id)createJoinTeamButtonWithTag:(long long)a0 title:(id)a1 backgroundColor:(id)a2 cornerRadius:(double)a3 action:(SEL)a4;
- (void).cxx_destruct;
- (void)setupUI;

@end
