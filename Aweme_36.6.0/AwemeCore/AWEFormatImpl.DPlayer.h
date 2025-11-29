@interface AWEFormatImpl.DPlayer : NSObject <AWEDPlayerDelegate> {
    void /* unknown type, empty encoding */ pauseState;
    void /* unknown type, empty encoding */ innerPlayer;
    void /* unknown type, empty encoding */ realCurrentTime;
    void /* unknown type, empty encoding */ finishPlayCallback;
    void /* unknown type, empty encoding */ focusIdentifier;
    void /* unknown type, empty encoding */ looping;
    void /* unknown type, empty encoding */ $__lazy_storage_$_player;
    void /* unknown type, empty encoding */ scaleMode;
}

- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (long long)scaleModeForVideoWithPlayer:(id)a0;
- (void)playerWillLoopPlaying:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
