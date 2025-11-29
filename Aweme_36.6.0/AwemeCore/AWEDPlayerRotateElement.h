@interface AWEDPlayerRotateElement : AWEDPlayerInteractionBaseElement

@property (nonatomic) BOOL isInFullScreen;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (nonatomic) double fullScreenWidth;
@property (nonatomic) double fullScreenHeight;

- (id)activateInfoWithData:(id)a0;
- (BOOL)useGeneralActionButton;
- (id)actionButtonImage;
- (void)handleClickActionButton;
- (id)actionAccessibilityLabel;
- (id)activateInfoForSimplePlayerWithVideoModel:(id)a0;
- (void)clickToRotateGeneralPlayer;
- (void)reset;
- (void)viewDidLoad;

@end
