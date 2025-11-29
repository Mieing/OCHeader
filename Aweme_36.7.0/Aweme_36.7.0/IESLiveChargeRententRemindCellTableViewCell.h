@class UIImageView, UILabel;

@interface IESLiveChargeRententRemindCellTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *label;

- (void)updateWithCellModel:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)awakeFromNib;
- (void)setupUI;

@end
