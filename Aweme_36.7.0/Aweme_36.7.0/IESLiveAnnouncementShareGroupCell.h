@class UIImageView, UILabel;

@interface IESLiveAnnouncementShareGroupCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UILabel *nameLabel;

- (void)updateUIWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)setupLayout;

@end
