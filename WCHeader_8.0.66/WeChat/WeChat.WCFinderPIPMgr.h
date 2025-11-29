@interface WeChat.WCFinderPIPMgr : MMUserService <WCPlayerPipMgrExt, MMServiceProtocol> {
    void /* unknown type, empty encoding */ currentVolume;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ sourceContentVM;
@property (nonatomic, retain) void /* unknown type, empty encoding */ curContentVM;
@property (nonatomic, retain) void /* unknown type, empty encoding */ curPlayerView;
@property (nonatomic) void /* unknown type, empty encoding */ is_pip_status;

- (void)onPipSourcePlayerUnRegisterPipResource:(id)a0;
- (void)onPlayerRestoreUserInterface;
- (void)onPlayerWillStopPictureInPicture;
- (void)onPlayerWillStartPictureInPicture;
- (void)onPlayerDidStartPictureInPicture;
- (void)onPlayerDidStopPictureInPicture:(id)a0;
- (void)addNotify;
- (void)removeNotify;
- (void)addPIPNotify;
- (void)removePIPNotify;
- (void)onEnterForeground;
- (void)reportEnterForeground;
- (void)didEnterBackGround;
- (void)willTerminated;
- (void)volumeChangedAfterIOS15WithNotification:(id)a0;
- (void)volumeChangedBeforeIOS15WithNotification:(id)a0;
- (void)reportCreate:(id)a0 contentVM:(id)a1;
- (void)reportClose:(id)a0 contentVM:(id)a1 reason:(long long)a2;
- (void)reportSeekFromTime:(double)a0 toTime:(double)a1;
- (void)reportPause;
- (void)reportPlay;
- (void)reportPlayFinished;
- (void)reportReplay;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
