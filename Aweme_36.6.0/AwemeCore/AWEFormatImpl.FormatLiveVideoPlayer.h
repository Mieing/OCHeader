@interface AWEFormatImpl.FormatLiveVideoPlayer : NSObject <TTVideoEngineDelegate> {
    void /* unknown type, empty encoding */ _playerView;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ looping;
    void /* unknown type, empty encoding */ videoTag;
    void /* unknown type, empty encoding */ videoSubTag;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ ttPlayer;
    void /* unknown type, empty encoding */ placeholderImageView;
    void /* unknown type, empty encoding */ placeholderImageUrl;
    void /* unknown type, empty encoding */ placeholderImage;
    void /* unknown type, empty encoding */ isPlaying;
    void /* unknown type, empty encoding */ isPaused;
    void /* unknown type, empty encoding */ scaleModel;
    void /* unknown type, empty encoding */ onPlayDidReadyFirstFrame;
    void /* unknown type, empty encoding */ onPlayDidStart;
    void /* unknown type, empty encoding */ onPlayDidFinish;
    void /* unknown type, empty encoding */ timestampObservers;
    void /* unknown type, empty encoding */ timestampObserverQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_disableAsyncPause;
    void /* unknown type, empty encoding */ startTime;
}

- (void)videoEngineUserStopped:(id)a0;
- (void)videoEngine:(id)a0 playbackStateDidChanged:(long long)a1;
- (void)videoEngine:(id)a0 loadStateDidChanged:(unsigned long long)a1;
- (void)videoEngineDidFinish:(id)a0 error:(id)a1;
- (void)videoEngineDidFinish:(id)a0 videoStatusException:(long long)a1;
- (void)videoEngineCloseAysncFinish:(id)a0;
- (void)videoEngineReadyToDisPlay:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
