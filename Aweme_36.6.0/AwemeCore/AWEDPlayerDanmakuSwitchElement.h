@interface AWEDPlayerDanmakuSwitchElement : AWEDPlayerInteractionBaseElement

- (void)initializeElement;
- (id)activateInfoWithData:(id)a0;
- (BOOL)useGeneralActionButton;
- (id)actionButtonImage;
- (void)handleClickActionButton;
- (id)actionAccessibilityLabel;
- (void)updateDanmakuSwitch;

@end
