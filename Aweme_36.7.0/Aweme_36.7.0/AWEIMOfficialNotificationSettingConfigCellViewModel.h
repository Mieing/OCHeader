@class NSNumber, UIViewController;
@protocol IESIMHalfScreenViewControllerProtocol;

@interface AWEIMOfficialNotificationSettingConfigCellViewModel : AWEIMOfficialNotificationSettingCellViewModel

@property (retain, nonatomic) NSNumber *selectedValue;
@property (weak, nonatomic) UIViewController<IESIMHalfScreenViewControllerProtocol> *actionSheetVC;

- (void)onArrowTapped;
- (id)settingModel:(id)a0 subTitle:(id)a1 withIndex:(long long)a2 isSelected:(BOOL)a3 value:(long long)a4;
- (void)updateSettingForKey:(id)a0 value:(id)a1;
- (void).cxx_destruct;

@end
