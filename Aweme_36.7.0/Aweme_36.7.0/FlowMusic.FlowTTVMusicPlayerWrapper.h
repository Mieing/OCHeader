@interface FlowMusic.FlowTTVMusicPlayerWrapper : NSObject <FlowMusicPlayerDelegate> {
    void /* unknown type, empty encoding */ _trackParams;
    void /* unknown type, empty encoding */ player;
    void /* unknown type, empty encoding */ volumeController;
    void /* unknown type, empty encoding */ listeners;
    void /* unknown type, empty encoding */ startTime;
    void /* unknown type, empty encoding */ lastStoppedVideoID;
    void /* unknown type, empty encoding */ logger;
}

- (void)playerAudioRendered:(id)a0;
- (void)playerReadyToPlay:(id)a0;
- (void)playerCloseAysncFinish:(id)a0;
- (void)playerDidFinish:(id)a0 error:(id)a1;
- (void)player:(id)a0 playbackStateDidChanged:(long long)a1;
- (void)videoPlayer:(id)a0 didStopPlaying:(id)a1;
- (void)videoPlayer:(id)a0 loadStateDidChange:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
