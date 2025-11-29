@class NSString, UILabel;

@interface BDPVideoPortraitAlertViewCell : UITableViewCell

@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
