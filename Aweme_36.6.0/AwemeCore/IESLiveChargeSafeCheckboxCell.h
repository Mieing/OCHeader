@class UIButton, UILabel;

@interface IESLiveChargeSafeCheckboxCell : UITableViewCell

@property (retain, nonatomic) UIButton *checkboxButton;
@property (retain, nonatomic) UILabel *remindLabel;
@property (copy, nonatomic) id /* block */ changeSelectedStatus;

- (void)touchSelectButton:(id)a0;
- (void)refreshText:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
