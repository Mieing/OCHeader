@class NSString;

@interface AWEDPlayerMiddlePlayElement : AWEDPlayerInteractionBaseElement <AWEPlayVideoDelegate>

@property (nonatomic) BOOL isPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)iesPlayer:(id)a0 willInStallAction:(BOOL)a1;
- (id)activateInfoWithData:(id)a0;
- (struct CGSize { double x0; double x1; })actionButtonSize;
- (BOOL)useGeneralActionButton;
- (id)actionButtonImage;
- (void)handleClickActionButton;
- (id)actionAccessibilityLabel;
- (id)activateInfoForSimplePlayerWithVideoModel:(id)a0;
- (void)updatePlaySate:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (void)viewDidLoad;

@end
