@interface AWEStoryImpl.MomentAudioCell : AWEStoryImpl.MomentBaseCell <AFDAudioPlayerManagerDelegate> {
    void /* unknown type, empty encoding */ hasTrackedVideoPlay;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioPlayerManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioContentView;
    void /* unknown type, empty encoding */ isFreshPlay;
}

- (void)playerManagerLoadState:(id)a0;
- (void)playerManagerDidStarted:(id)a0;
- (void)playerManagerDidPaused:(id)a0;
- (void)playerManagerDidStopped:(id)a0;
- (void)playerManagerDidFinished:(id)a0;
- (void)playerManagerDidFailed:(id)a0;
- (void)playerManagerPlaying:(id)a0 currentTime:(double)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
