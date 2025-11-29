@interface FlowUGCVideo.FlowUGCVideoPlayer : FlowVideoPlayer <FlowVideoPlayerDelegate> {
    void /* unknown type, empty encoding */ listeners;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _audioSceneResource;
}

- (void)videoPlayer:(id)a0 playbackStateDidChange:(long long)a1;
- (void)videoPlayer:(id)a0 loadStateDidChange:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)stop;

@end
