@class UIImageView, UILabel, UIView;

@interface AWEFollowGroupTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *bottomLine;

- (void)__setupView;
- (void)configWithGroup:(id)a0 isSelecting:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
