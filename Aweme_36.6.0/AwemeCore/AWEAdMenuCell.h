@class UILabel, UIImageView;

@interface AWEAdMenuCell : UITableViewCell

@property (readonly, nonatomic) UILabel *nameLabel;
@property (readonly, nonatomic) UIImageView *tickImageView;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
