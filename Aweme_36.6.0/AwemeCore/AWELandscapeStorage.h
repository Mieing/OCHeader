@interface AWELandscapeStorage : NSObject

+ (BOOL)hasUseDoubleTapPause;
+ (void)setHasUseDoubleTapPause:(BOOL)a0;
+ (BOOL)fullScreenButtonGuideShow;
+ (void)setFullScreenButtonGuideShow:(BOOL)a0;
+ (BOOL)fullScreenButtonUse;
+ (void)setFullScreenButtonUse:(BOOL)a0;
+ (double)guideManagerShowTime;
+ (void)setGuideManagerShowTime:(double)a0;
+ (BOOL)hasUseLongPressRatePlay;
+ (void)setHasUseLongPressRatePlay:(BOOL)a0;
+ (BOOL)nextEpisodeGuide;
+ (void)setNextEpisodeGuide:(BOOL)a0;
+ (BOOL)hasUsedPCContinuePlay;
+ (void)setHasUsedPCContinuePlay:(BOOL)a0;
+ (BOOL)hasUsedPlaybackSetting;
+ (void)setHasUsedPlaybackSetting:(BOOL)a0;
+ (BOOL)slideGuideShow;
+ (void)setSlideGuideShow:(BOOL)a0;
+ (long long)slideTimes;
+ (void)setSlideTimes:(long long)a0;
+ (BOOL)timingCloseGuide;
+ (void)setTimingCloseGuide:(BOOL)a0;
+ (BOOL)hasUsedTimingClose;
+ (void)setHasUsedTimingClose:(BOOL)a0;
+ (long long)playbackSetting;
+ (void)setPlaybackSetting:(long long)a0;

- (id)init;

@end
