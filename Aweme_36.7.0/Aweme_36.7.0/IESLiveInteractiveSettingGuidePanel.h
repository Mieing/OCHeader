@class UIButton, IESLiveInteractiveSettingGuidePanelSceneSwitchConfig, UIImageView, UISwitch, UILabel, UIView, IESLiveInteractiveSettingGuidePanelSceneSwitch;

@interface IESLiveInteractiveSettingGuidePanel : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *titleSeperatorLineView;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) IESLiveInteractiveSettingGuidePanelSceneSwitch *floatSceneSwitch;
@property (retain, nonatomic) IESLiveInteractiveSettingGuidePanelSceneSwitch *equalSceneSwitch;
@property (retain, nonatomic) UILabel *micNumChangeWithOnlineNumLabel;
@property (retain, nonatomic) UISwitch *micNumChangeWithOnlineNumSwith;
@property (retain, nonatomic) UIView *bottomSeperatorLineView;
@property (retain, nonatomic) UIButton *okButton;
@property (retain, nonatomic) IESLiveInteractiveSettingGuidePanelSceneSwitchConfig *floatSceneSwitchConfig;
@property (retain, nonatomic) IESLiveInteractiveSettingGuidePanelSceneSwitchConfig *equalSceneSwitchConfig;
@property (copy, nonatomic) id /* block */ tapBlock;

- (id)initWithType:(unsigned long long)a0 isMicNumChangeWithOnlineNum:(BOOL)a1;
- (void)p_updateSceneSwitchType:(unsigned long long)a0 isMicNumChangeWithOnlineNum:(BOOL)a1;
- (id)p_getPreviewURL;
- (unsigned long long)p_getCurrentSceneSwitchType;
- (BOOL)p_isDynamic;
- (void)p_micNumChangeWithOnlineNumSwithAction:(id)a0;
- (void)p_onClickOKButton;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;

@end
