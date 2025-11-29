@class NSDictionary, NSString;

@interface IESLiveVideoPlayerElement : LynxUI <IESLiveVideoPreviewStreamPlayerDelegate, IESLiveVideoPreviewStreamPaidDelegate>

@property (nonatomic) BOOL isAutoPlay;
@property (nonatomic) double startPosition;
@property (nonatomic) BOOL needSyncVideoProgress;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic, getter=isPausedForScreenLock) BOOL pausedForScreenLock;
@property (nonatomic) BOOL disableResolutionAutoDemotion;
@property (nonatomic, getter=isMute) BOOL mute;
@property (nonatomic, getter=isRepeat) BOOL repeat;
@property (copy, nonatomic) NSString *fitMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__1070;
+ (id)__lynx_prop_config__1111;
+ (id)__lynx_prop_config__1332;
+ (id)__lynx_prop_config__1403;
+ (id)__lynx_prop_config__1504;
+ (id)__lynx_prop_config__1605;
+ (id)__lynx_prop_config__1666;
+ (id)__lynx_prop_config__1747;
+ (id)__lynx_prop_config__1788;
+ (id)__lynx_prop_config__1859;
+ (id)__lynx_ui_method_config__19310;
+ (id)__lynx_ui_method_config__21011;
+ (id)__lynx_ui_method_config__21412;
+ (id)__lynx_ui_method_config__21813;
+ (id)__lynx_ui_method_config__22314;
+ (void)load;

- (void)enterRoom;
- (void)play:(id)a0 withResult:(id /* block */)a1;
- (void)pause:(id)a0 withResult:(id /* block */)a1;
- (void)stop:(id)a0 withResult:(id /* block */)a1;
- (void)autoplay:(BOOL)a0 requestReset:(BOOL)a1;
- (void)playerPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (void)logExtra:(id)a0 requestReset:(BOOL)a1;
- (void)poster:(id)a0 requestReset:(BOOL)a1;
- (void)fitMode:(id)a0 requestReset:(BOOL)a1;
- (void)enterRoom:(id)a0 withResult:(id /* block */)a1;
- (void)didPlayError:(id)a0;
- (void)didStartStall;
- (void)mute:(id)a0 withResult:(id /* block */)a1;
- (void)enterRoomAction;
- (void)setLynxEnterRoomEnable:(BOOL)a0 requestReset:(BOOL)a1;
- (void)playerController:(id)a0 currentPlayTime:(double)a1 playableTime:(double)a2 duration:(double)a3;
- (void)playerController:(id)a0 playStateDidChange:(long long)a1;
- (void)playerController:(id)a0 playError:(id)a1;
- (void)playerControllerPlayFinished:(id)a0;
- (void)onStalledStart:(id)a0 actionType:(long long)a1 reason:(unsigned long long)a2;
- (void)viewStatusDidChange:(long long)a0;
- (void)updateCountDownForSecond:(long long)a0;
- (void)startposition:(long long)a0 requestReset:(BOOL)a1;
- (void)episode:(id)a0 requestReset:(BOOL)a1;
- (void)setMuted:(BOOL)a0 requestReset:(BOOL)a1;
- (void)resetPlayerFitMode:(id)a0;
- (void)didEnded;
- (void)setRepeat:(BOOL)a0 requestReset:(BOOL)a1;
- (void)disableResolutionAutoDemotion:(BOOL)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (void)play;
- (id)init;
- (void)dealloc;
- (void)didStart;
- (id)createView;
- (void)resetPlayer;
- (void)didStop;
- (void)didPause;

@end
