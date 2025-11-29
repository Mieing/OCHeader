@class IESLiveBigPartyOpenGuideSettingPanelCellConfig, NSString, UILabel, IESLiveInteractionLayout, IESLiveBigPartyOpenGuideSettingPanelSwitchButton;

@interface IESLiveBigPartyOpenGuideSettingPanelSwitchSceneAndLayoutCell : UITableViewCell <IESLiveBigPartyOpenGuideSettingPanelCellProtocol>

@property (retain, nonatomic) IESLiveBigPartyOpenGuideSettingPanelSwitchButton *audienceLinkmicButton;
@property (retain, nonatomic) IESLiveBigPartyOpenGuideSettingPanelSwitchButton *chatRoomButton;
@property (retain, nonatomic) UILabel *layoutLabel;
@property (retain, nonatomic) IESLiveBigPartyOpenGuideSettingPanelSwitchButton *dynamicLayoutButton;
@property (retain, nonatomic) IESLiveBigPartyOpenGuideSettingPanelSwitchButton *fixedLayoutButton;
@property (retain, nonatomic) IESLiveInteractionLayout *currentLayout;
@property (retain, nonatomic) IESLiveBigPartyOpenGuideSettingPanelCellConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewsIfNeeded;
- (void)updateSceneSelected:(BOOL)a0;
- (void)updateLayoutSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)updateSettings;

@end
