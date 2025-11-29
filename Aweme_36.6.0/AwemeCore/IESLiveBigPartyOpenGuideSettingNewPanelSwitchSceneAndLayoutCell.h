@class IESLiveBigPartyOpenGuideSettingPanelCellConfig, UIStackView, NSString, UILabel, IESLiveInteractionLayout, IESLiveBigPartyOpenGuideSettingPanelSwitchButton;

@interface IESLiveBigPartyOpenGuideSettingNewPanelSwitchSceneAndLayoutCell : UITableViewCell <IESLiveBigPartyOpenGuideSettingPanelCellProtocol>

@property (retain, nonatomic) IESLiveBigPartyOpenGuideSettingPanelSwitchButton *audienceLinkmicButton;
@property (retain, nonatomic) IESLiveBigPartyOpenGuideSettingPanelSwitchButton *chatRoomButton;
@property (retain, nonatomic) UILabel *layoutLabel;
@property (retain, nonatomic) IESLiveBigPartyOpenGuideSettingPanelSwitchButton *dynamicLayoutButton;
@property (retain, nonatomic) IESLiveBigPartyOpenGuideSettingPanelSwitchButton *fixedLayoutButton;
@property (retain, nonatomic) IESLiveBigPartyOpenGuideSettingPanelSwitchButton *bigLayoutButton;
@property (retain, nonatomic) IESLiveInteractionLayout *currentLayout;
@property (retain, nonatomic) IESLiveBigPartyOpenGuideSettingPanelCellConfig *config;
@property (retain, nonatomic) UIStackView *sceneStack;
@property (retain, nonatomic) UIStackView *layoutStack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewsIfNeeded;
- (void)updateSceneSelected:(BOOL)a0;
- (void)updateLayoutSelected:(id)a0;
- (void)updateLayoutSelectedIfNeeded;
- (void)setupSceneButtons;
- (void)setupLayoutLabel;
- (void)setupLayoutButtons;
- (id)createButtonWithTitle:(id)a0 iconName:(id)a1 action:(id /* block */)a2;
- (void)setupContainerView;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)updateSettings;

@end
