@interface FlowVoiceCall.VoiceCallImmersiveModeComponent : FlowCommon.TightCouplingComponent <FlowVideoPlayerDelegate> {
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _coreComponent;
    void /* unknown type, empty encoding */ _captionComponent;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ immersiveBgVideoPlayer;
    void /* unknown type, empty encoding */ enableImmersiveBgVideo;
    void /* unknown type, empty encoding */ isImmersiveBgVideoPlaying;
    void /* unknown type, empty encoding */ immersiveBgVideoPlaybackCount;
    void /* unknown type, empty encoding */ immersiveBgColor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topGradientLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomGradientLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topGradientView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomGradientView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomBackgroundView;
}

- (void)videoPlayer:(id)a0 playbackStateDidChange:(long long)a1;
- (void)videoPlayer:(id)a0 loadStateDidChange:(long long)a1;
- (void)disableDynamicBackground;
- (void).cxx_destruct;
- (id)init;

@end
