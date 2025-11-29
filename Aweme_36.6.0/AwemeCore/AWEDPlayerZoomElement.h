@interface AWEDPlayerZoomElement : AWEDPlayerInteractionBaseElement

@property (nonatomic) BOOL isZoomIn;

- (id)activateInfoWithData:(id)a0;
- (BOOL)useGeneralActionButton;
- (id)actionButtonImage;
- (void)handleClickActionButton;
- (id)actionAccessibilityLabel;
- (id)activateInfoForSimplePlayerWithVideoModel:(id)a0;

@end
