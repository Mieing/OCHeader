@class UIButton, IESLiveInteractionLayout, UIView;

@interface IESLiveBigPartyOpenGuideSettingPanelSwitchLayoutCell : IESLiveBigPartyOpenGuideSettingPanelCell

@property (retain, nonatomic) UIButton *equalButton;
@property (retain, nonatomic) UIButton *floatButton;
@property (retain, nonatomic) UIView *buttonsContainer;
@property (nonatomic) BOOL isDynamicLayout;
@property (retain, nonatomic) IESLiveInteractionLayout *currentLayout;

- (void)onOffSwitchTouchButtonDidClick;
- (void)equalButtonDidClick;
- (void)floatButtonDidClick;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)setupUI;

@end
