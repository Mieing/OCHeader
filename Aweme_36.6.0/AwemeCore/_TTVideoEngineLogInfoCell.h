@class UILabel;

@interface _TTVideoEngineLogInfoCell : UITableViewCell

@property (retain, nonatomic) UILabel *textLab;
@property (retain, nonatomic) UILabel *dateLab;

- (void)refreshView:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setupUI;

@end
