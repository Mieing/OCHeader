@interface AWEProfileTopVideoExitFullScreenElement : AWEDPlayerInteractionBaseElement

- (id)activateInfoWithData:(id)a0;
- (void)willRotateToFullScreen:(BOOL)a0;
- (BOOL)useGeneralActionButton;
- (id)actionButtonImage;
- (void)handleClickActionButton;
- (id)actionAccessibilityLabel;
- (void)clickToRotateGeneralPlayer;

@end
