@class UILabel, UIButton, AWEUserModel;

@interface AFDSJBRecommendFriendTableViewCell : AFDSJBInviteFriendTableViewCell

@property (retain, nonatomic) UILabel *recommendLabel;
@property (retain, nonatomic) UIButton *followButton;
@property (retain, nonatomic) AWEUserModel *user;
@property (copy, nonatomic) id /* block */ followButtonTappedBlock;

- (void)configWithUser:(id)a0;
- (void)setupRecommendUI;
- (void)followButtonTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
