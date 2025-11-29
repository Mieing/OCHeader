@class UISwitch;

@interface IESLiveAnnouncementSettingSwitchCell : IESLiveAnnouncementSettingBaseCell

@property (retain, nonatomic) UISwitch *switchView;

- (void)switchViewValueDidChanged:(id)a0;
- (void)updateUIWithItemModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupLayout;

@end
