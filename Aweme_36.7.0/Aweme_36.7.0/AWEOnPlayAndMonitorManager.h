@class AWEPlayVideoViewController, NSArray, NSString;

@interface AWEOnPlayAndMonitorManager : NSObject <AWEOnPlayAndMonitorHandlerProtocol>

@property (weak, nonatomic) AWEPlayVideoViewController *playerController;
@property (copy, nonatomic) NSArray *handlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPlayerWillLoopPlaying:(id)a0;
- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1 context:(id)a2;
- (void)onPause;
- (void)onBackgroundPlay;
- (id)paramsForVideoPlayQuality;
- (id)paramsForVideoPlayEnd;
- (id)paramsForVideoPlayFailed:(BOOL)a0;
- (id)paramsForVideoRequest:(BOOL)a0;
- (id)paramsForVideoRequestResponse;
- (id)paramsForVideoBlock;
- (void)onPrepareToPlay:(BOOL)a0;
- (void)onPlayer:(id)a0 didChangeStallState:(long long)a1 actionType:(long long)a2 reason:(unsigned long long)a3 context:(id)a4;
- (id)handlerClasses;
- (void)onStopWithHold:(BOOL)a0 async:(BOOL)a1;
- (void).cxx_destruct;
- (void)setupHandlers;
- (void)onResume;
- (id)initWithPlayerController:(id)a0;
- (void)onPlay:(long long)a0;

@end
