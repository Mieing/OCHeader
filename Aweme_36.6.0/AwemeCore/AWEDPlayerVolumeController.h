@class AWEDPlayerVolumeView, NSString;

@interface AWEDPlayerVolumeController : AWEDPlayerInteractionBaseController <AWEDPlayerVolumeViewDelegate>

@property (retain, nonatomic) AWEDPlayerVolumeView *volumeView;
@property (nonatomic) unsigned long long interactionViewState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (unsigned long long)activateType;
- (BOOL)shouldResponseGestureRecognizer:(id)a0;
- (BOOL)handleResponseGestureRecognizer:(id)a0;
- (BOOL)shouldReceiveGestureRecognizer:(id)a0 touch:(id)a1;
- (void)updateDPlayerState:(unsigned long long)a0;
- (void)changeInteractionViewToState:(unsigned long long)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (BOOL)isInteractive;
- (BOOL)isInteracting;
- (void)reset;
- (void)viewDidLoad;
- (void)viewWillDisappear;

@end
