@class NSString;

@interface AWEAIGCUGCFusionInteractionPauseElement : AWEDPlayerInteractionBaseElement <AWEAIGCUGCFusionInteractionDispatchProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (id)activateInfoWithData:(id)a0;
- (struct CGSize { double x0; double x1; })actionButtonSize;
- (BOOL)shouldResponseGestureRecognizer:(id)a0;
- (BOOL)handleResponseGestureRecognizer:(id)a0;
- (BOOL)useGeneralActionButton;
- (id)actionButtonImage;
- (id)activateInfoForSimplePlayerWithVideoModel:(id)a0;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;

@end
