@class NSMutableDictionary, NSDictionary, AWEAwemeModel, NSString;

@interface AWEPlayVideoForegroundRemoteControlManager : NSObject <AWENowPlayingInfoPlayerProtocol>

@property (retain, nonatomic) NSMutableDictionary *nowPlayingInfo;
@property (copy, nonatomic) id /* block */ onPlayAction;
@property (copy, nonatomic) id /* block */ onPauseAction;
@property (copy, nonatomic) id /* block */ onPlayNextAction;
@property (copy, nonatomic) id /* block */ onPlayPreAction;
@property (retain, nonatomic) AWEAwemeModel *currentPlayModel;
@property (retain, nonatomic) AWEAwemeModel *savedPlayModelWhenRemoteDeviceNotConnect;
@property (nonatomic) BOOL needForceStartWhenRemoteDeviceNotConnect;
@property (retain, nonatomic) NSDictionary *extraTrackInfo;
@property (copy, nonatomic) id /* block */ getCurrentPlaybackTime;
@property (copy, nonatomic) id /* block */ isCurrentPlayerPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isForegroundRemoteControlEnable;
+ (BOOL)isForegroundScrollNextAndPreEnable;
+ (BOOL)isForegroundPlayPauseEnable;
+ (id)sharedInstance;

- (void)playForRemoteControl;
- (void)pauseForRemoteControl;
- (void)seekToTimeForRemoteControl:(double)a0;
- (void)playPrevForRemoteControl;
- (void)playNextForRemoteControl;
- (BOOL)canPlayForRemoteControl;
- (BOOL)canPauseForRemoteControl;
- (BOOL)canPlayPrevForRemoteControl;
- (BOOL)canPlayNextForRemoteControl;
- (void)p_applicationDidEnterBackground;
- (void)remoteControlOnPlayPre:(id /* block */)a0;
- (void)remoteControlOnPlayNext:(id /* block */)a0;
- (void)trackSkipNextOrPreWithModel:(id)a0 changeNext:(BOOL)a1;
- (void)audioSessionRouteDidChange:(id)a0;
- (void)playerStartPlayWithModel:(id)a0 force:(BOOL)a1 extraInfo:(id)a2;
- (BOOL)isConnectRemoteDevice;
- (BOOL)isAFDPureMode;
- (void)setupPlayingPlayer;
- (void)updatePlayBackInfoWithModel:(id)a0;
- (void)removePlayingPlayer:(BOOL)a0;
- (void)stopPlayerWhenLeavePage:(id)a0;
- (void)updatePlayingInfoWithModel:(id)a0 updateAll:(BOOL)a1;
- (void)playerStartPlayWithModel:(id)a0 extraInfo:(id)a1;
- (void)playerPausePlayWithModel:(id)a0;
- (void)playerStopPlayWithModel:(id)a0;
- (void)playerPageDidAppearWithModel:(id)a0;
- (void)playerPageDidDisappearWithModel:(id)a0;
- (void)remoteControlOnPause:(id /* block */)a0;
- (void)remoteControlOnPlay:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
