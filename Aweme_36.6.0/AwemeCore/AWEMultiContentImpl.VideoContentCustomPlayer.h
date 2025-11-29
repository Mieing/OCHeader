@interface AWEMultiContentImpl.VideoContentCustomPlayer : NSObject <AWEDPlayerDelegate, NSObject> {
    void /* unknown type, empty encoding */ playerDelegate;
    void /* unknown type, empty encoding */ player;
    void /* unknown type, empty encoding */ lockPlayerAndPlayerDelegate;
}

- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)player:(id)a0 didChangeStallState:(long long)a1 actionType:(long long)a2 reason:(unsigned long long)a3;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (id)trackPerformanceParamsWithEvent:(id)a0;
- (void)iesPlayer:(id)a0 playbackFailedWithError:(id)a1;
- (void)playerWillLoopPlaying:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
