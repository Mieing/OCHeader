@class DUXSwitch;

@interface AWEFeedPiPPanelSwitchCell : AWEFeedPiPPanelCell

@property (retain, nonatomic) DUXSwitch *aSwitch;

- (id)initWithTitle:(id)a0 subTitle:(id)a1 swtichIsOn:(BOOL)a2 switchValueChangedBlock:(id /* block */)a3;
- (BOOL)cellIsOn;
- (void).cxx_destruct;
- (void)setupUI;

@end
