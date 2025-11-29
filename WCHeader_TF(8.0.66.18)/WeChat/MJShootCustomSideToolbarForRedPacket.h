@class MJToolbarButton;

@interface MJShootCustomSideToolbarForRedPacket : MJShootSideToolbar

@property (retain, nonatomic) MJToolbarButton *fancyButton;

- (void)commonInit;
- (void)fancyButtonDidTouchUpInside:(id)a0;
- (void)configStyleWithButton:(id)a0 normalImageName:(id)a1 selectedImageName:(id)a2;
- (void)configExpandHitSizeWithButton:(id)a0;
- (void)updateForTemplateShooting;
- (void)updateForNormalShooting;
- (void)updateForTemplatePanelShowing;
- (void)updateForTemplatePanelDismissing;
- (void)updateForVisagePanelShowing;
- (void)updateForVisagePanelDismissing;
- (void)updateForFlashOn;
- (void)updateForFlashOff;
- (void)updateCountdownTimerButtonStyleWithMode:(unsigned long long)a0;
- (void)updateRecordingTimerButtonStyleWithMode:(unsigned long long)a0;
- (void).cxx_destruct;

@end
