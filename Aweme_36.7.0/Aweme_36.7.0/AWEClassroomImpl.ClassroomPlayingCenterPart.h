@interface AWEClassroomImpl.ClassroomPlayingCenterPart : NSObject <AWENowPlayingInfoPlayerProtocol> {
    void /* unknown type, empty encoding */ courseInfo;
    void /* unknown type, empty encoding */ lessonInfo;
    void /* unknown type, empty encoding */ playingInfo;
    void /* unknown type, empty encoding */ player;
    void /* unknown type, empty encoding */ playBackRate;
}

- (void)playForRemoteControl;
- (void)pauseForRemoteControl;
- (void)seekToTimeForRemoteControl:(double)a0;
- (void)playPrevForRemoteControl;
- (void)playNextForRemoteControl;
- (BOOL)canPlayForRemoteControl;
- (BOOL)canPauseForRemoteControl;
- (BOOL)canPlayPrevForRemoteControl;
- (BOOL)canPlayNextForRemoteControl;
- (BOOL)canSeekForRemoteControl;
- (id)nowPlayingInfo;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)didEnterBackground;
- (id)init;

@end
