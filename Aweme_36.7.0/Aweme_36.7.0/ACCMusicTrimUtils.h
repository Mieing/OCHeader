@interface ACCMusicTrimUtils : NSObject

+ (void)addCachedKey:(id)a0;
+ (id)transferAudioLengthFromNumberToText:(double)a0;
+ (double)musicTotalDurationForMusic:(id)a0;
+ (id)transferAudioLengthFromNumberToStandardFormat:(double)a0;
+ (BOOL)shouldShowImageTrimPanelPanTip;
+ (void)hasShowImageTrimPanelPanTip;
+ (id)defaultAudioWavePointsForCount:(unsigned long long)a0;
+ (id)getCachedMusicTrimOriginAudioWavePointsWithMusicID:(id)a0 audioWavePointsCount:(long long)a1;
+ (void)cacheMusicTrimOriginAudioWavePoints:(id)a0 musicID:(id)a1 audioWavePointsCount:(long long)a2;
+ (BOOL)shouldShowVideoTrimPanelScrollTip;
+ (void)hasShowVideoTrimPanelScrollTip;
+ (void)clearCachedMusicTrimOriginAudioWavePoints;
+ (id)cachedKeys;
+ (id)cachedKey;

@end
