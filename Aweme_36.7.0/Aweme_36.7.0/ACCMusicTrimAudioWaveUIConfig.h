@interface ACCMusicTrimAudioWaveUIConfig : NSObject

+ (double)musicTrimPanelHeight;
+ (double)imageTrimHandlerHorizontalGap;
+ (double)selectedAudioWaveViewHeight;
+ (double)maximumAudioPointHeight;
+ (double)calculateSelectedAudioWaveViewMaximumWidthForImageAlbum;
+ (double)audioWaveViewLeftGapForImageAlbum;
+ (double)audioPointGap;
+ (double)audioPointWidth;
+ (id)convertFromNormalizationAudioWavePointsToRealAudioWavePoints:(id)a0;
+ (double)minimumAudioPointHeight;
+ (double)videoTrimHandlerHorizontalGap;
+ (double)videoTrimBoundingWidth;
+ (id)configAudioWavePointsWithAudioURL:(id)a0 duration:(double)a1 audioPointsCount:(long long)a2 isDefault:(BOOL *)a3;
+ (void)configAudioWavePointsAsyncWithAudioURL:(id)a0 duration:(double)a1 audioPointsCount:(long long)a2 callback:(id /* block */)a3;
+ (id)defaultAudioPointsArrayWithAudioPointsCount:(long long)a0;
+ (double)calculateSelectedAudioWaveViewMaximumWidthForVideo;
+ (double)audioWaveViewLeftGapForVideo;
+ (double)audioWaveAndHandlerLeftGap;

@end
