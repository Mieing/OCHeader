@interface BDMultiContentContainer.VideoContentPlayerAdapter : NSObject <IESVideoPlayerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ startLoadingDate;
    void /* unknown type, empty encoding */ fastPlaySpeed;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ isInFullPage;
    void /* unknown type, empty encoding */ contentMode;
    void /* unknown type, empty encoding */ injectPlayer;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ mute;
    void /* unknown type, empty encoding */ repeated;
    void /* unknown type, empty encoding */ stopPlayingByPurpose;
    void /* unknown type, empty encoding */ playerController;
    void /* unknown type, empty encoding */ didReadyBlock;
    void /* unknown type, empty encoding */ _isPlayerReady;
    void /* unknown type, empty encoding */ totalPlayTime;
    void /* unknown type, empty encoding */ startTimestamp;
    void /* unknown type, empty encoding */ initialTimestamp;
    void /* unknown type, empty encoding */ startLoadTimestamp;
    void /* unknown type, empty encoding */ totalLoadTime;
    void /* unknown type, empty encoding */ playDuration;
    void /* unknown type, empty encoding */ currentPlayStartTime;
    void /* unknown type, empty encoding */ hasTrackedFinish;
    void /* unknown type, empty encoding */ hasPlayerStarted;
    void /* unknown type, empty encoding */ startStallTimestamp;
    void /* unknown type, empty encoding */ videoResolutionWidth;
    void /* unknown type, empty encoding */ videoResolutionHeight;
}

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)player:(id)a0 didChangeStallState:(long long)a1 actionType:(long long)a2 reason:(unsigned long long)a3;
- (void)playerWillLoopPlaying:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
