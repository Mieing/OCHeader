@interface AWEDPlayerBottomPlayElement : AWEDPlayerInteractionBaseElement

@property (nonatomic) BOOL isPlaying;

- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (id)activateInfoWithData:(id)a0;
- (BOOL)useGeneralActionButton;
- (id)actionButtonImage;
- (void)handleClickActionButton;
- (id)actionAccessibilityLabel;
- (id)activateInfoForSimplePlayerWithVideoModel:(id)a0;
- (void)updatePlaySate:(BOOL)a0;
- (void)viewDidLoad;

@end
