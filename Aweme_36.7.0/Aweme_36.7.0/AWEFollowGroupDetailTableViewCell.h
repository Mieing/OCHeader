@class AWEFollowGroupModel, AWEFollowGroupUserListView, UIImageView, NSString, UILabel, UIView, UIButton;

@interface AWEFollowGroupDetailTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UILabel *limitLabel;
@property (retain, nonatomic) UIImageView *arrowImage;
@property (retain, nonatomic) UIButton *enterButton;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) AWEFollowGroupUserListView *userListView;
@property (retain, nonatomic) AWEFollowGroupModel *groupModel;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *followGroupType;
@property (nonatomic) long long groupType;

- (id)trackParams;
- (void)configWithGroup:(id)a0 showLimit:(long long)a1;
- (void)__setupView;
- (void)enterButtonClick;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
