@class UILabel;

@interface IESLiveAudienceInteractDistributeSettingGuidePopupView : UIView

@property (nonatomic) int option;
@property (retain, nonatomic) UILabel *settingValueLabel;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) id /* block */ trackCallback;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ didUpdateDistributionOption;

- (void)didClickConfirmBtn;
- (void)setupWithSettingModel:(id)a0 config:(id)a1;
- (void)showWeakDistributionPanel;
- (void)didClickSettingSwitch:(id)a0;
- (void)setupWithSettingModel:(id)a0 enableCircle:(BOOL)a1;
- (id)mappedTrackStringFromOption:(int)a0;
- (void).cxx_destruct;

@end
