@class UIImageView, UILabel, DUXCheckBox;

@interface DYSecondAccountUnbindTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) DUXCheckBox *checkBox;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
