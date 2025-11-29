@interface AWEDPlayerSpeedElement : AWEDPlayerInteractionBaseElement

- (void)player:(id)a0 didChangePlaybackRate:(double)a1;
- (id)activateInfoWithData:(id)a0;
- (BOOL)useGeneralActionButton;
- (id)actionButtonImage;
- (void)handleClickActionButton;
- (id)actionAccessibilityLabel;
- (id)activateInfoForSimplePlayerWithVideoModel:(id)a0;
- (void)updatePlaySpeed;

@end
