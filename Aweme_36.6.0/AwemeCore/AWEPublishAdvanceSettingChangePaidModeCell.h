@class AWEPublishAdvanceSettingChangePaidModeItem, DUXButton, UILabel, DUXRadioBox;

@interface AWEPublishAdvanceSettingChangePaidModeCell : UITableViewCell

@property (weak, nonatomic) UILabel *mainTitleLabel;
@property (weak, nonatomic) UILabel *subTitleLabel;
@property (weak, nonatomic) DUXButton *eventButton;
@property (weak, nonatomic) DUXRadioBox *radioBox;
@property (retain, nonatomic) AWEPublishAdvanceSettingChangePaidModeItem *item;

- (void)eventButtonAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
