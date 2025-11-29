@class UILabel;

@interface AWENoticeEmptyTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;

- (void)configTitle:(id)a0 detail:(id)a1;
- (void)p_setupUI;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
