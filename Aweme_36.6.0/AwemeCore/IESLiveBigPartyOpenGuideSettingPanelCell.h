@class UIButton, NSString, UISwitch, IESLiveBigPartyOpenGuideSettingPanelCellConfig, UILabel, UIView;

@interface IESLiveBigPartyOpenGuideSettingPanelCell : UITableViewCell <IESLiveBigPartyOpenGuideSettingPanelCellProtocol>

@property (retain, nonatomic) IESLiveBigPartyOpenGuideSettingPanelCellConfig *config;
@property (retain, nonatomic) UIView *switchAndTitleContentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UISwitch *onOffSuperficialSwitch;
@property (retain, nonatomic) UIButton *onOffSwitchTouchButton;
@property (retain, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onOffSwitchTouchButtonDidClick;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
