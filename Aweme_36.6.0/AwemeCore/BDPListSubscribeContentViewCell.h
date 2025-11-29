@class UISwitch, UILabel, BDPCheckBox, UIButton;

@interface BDPListSubscribeContentViewCell : UITableViewCell

@property (nonatomic) BOOL addReminderButton;
@property (nonatomic) BOOL useSwitchStyle;
@property (nonatomic) unsigned long long reminderStatus;
@property (nonatomic) unsigned long long lastAvailableReminderStatus;
@property (retain, nonatomic) BDPCheckBox *checkBox;
@property (retain, nonatomic) UISwitch *openSwitch;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) UIButton *reminderButton;

- (void)updateSelectStatus:(long long)a0;
- (void)setupCheckBox;
- (void)openSwitchClicked:(id)a0;
- (void)updateReminderStatus:(unsigned long long)a0 ignoreHandler:(BOOL)a1;
- (void)setupReminderButton;
- (void)updateReminderButtonTitleAccordingToReminderStatus:(unsigned long long)a0;
- (void)alertButtonClicked:(id)a0;
- (void)setupSwitch;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)setupTitleLabel;

@end
