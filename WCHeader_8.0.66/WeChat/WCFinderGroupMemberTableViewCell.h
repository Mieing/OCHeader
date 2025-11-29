@class UILabel, MMHeadImageView;

@interface WCFinderGroupMemberTableViewCell : UITableViewCell

@property (weak, nonatomic) MMHeadImageView *headImageView;
@property (weak, nonatomic) UILabel *groupNickNameLabel;
@property (weak, nonatomic) UILabel *videoCountLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setUpUI;
- (void)updateWithAuthorContact:(id)a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
