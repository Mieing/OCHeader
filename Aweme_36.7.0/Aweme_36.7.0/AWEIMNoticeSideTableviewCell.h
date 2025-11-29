@class UIImageView, UILabel, UIView;

@interface AWEIMNoticeSideTableviewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *topBoxView;
@property (retain, nonatomic) UIView *bottomBoxView;

- (void)__setupUI;
- (void)setModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
