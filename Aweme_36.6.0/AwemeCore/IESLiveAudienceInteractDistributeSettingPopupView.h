@class UILabel;

@interface IESLiveAudienceInteractDistributeSettingPopupView : UIView

@property (nonatomic) int option;
@property (retain, nonatomic) UILabel *settingValueLabel;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) id /* block */ trackCallback;
@property (copy, nonatomic) id /* block */ didUpdateDistributionOption;

- (void)didClickSettingSwitch:(id)a0;
- (void)setupWithSetting:(int)a0 config:(id)a1;
- (void)didClickBackBtn;
- (void)chooseSetting;
- (void)setupWithSetting:(int)a0 prompts:(id)a1;
- (void).cxx_destruct;

@end
