@class NSString;

@interface AFDAlbumMusicBeatsManager : NSObject <AFDAlbumMusicBeatsManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)autoSlideDurationForMusicBeatsWithModel:(id)a0 currentPlayBackTime:(double)a1 clipIndex:(long long)a2 defaultDuration:(double)a3;
+ (BOOL)isMusicImageBeatsWithModel:(id)a0;
+ (void)preloadMusicBeatsWithDatasource:(id)a0 currentIndex:(long long)a1;
+ (double)calcDurationBetweenBeats:(id)a0 model:(id)a1 currentTime:(double)a2;
+ (double)livePhotoImagePlayTime;
+ (double)livePhotoImageToVideoTime;
+ (double)livePhotoVideoToImageTime;
+ (double)calcDurationBetweenBeats:(id)a0 minimumDuration:(double)a1 maximumDuration:(double)a2 model:(id)a3 currentTime:(double)a4;
+ (double)minimumDurationByImageBeats;
+ (double)maximumDurationByImageBeats;
+ (double)compesateRangeByImageBeats;
+ (double)filterShortMusicBeatsWithDuration:(double)a0 minimumDuration:(double)a1 beatsArray:(id)a2 beatsIndex:(long long)a3 currentTime:(double)a4;
+ (void)generateBeatsArrayWithModel:(id)a0;
+ (id)livePhotoPlayConfig;
+ (double)autoSlideDurationForMusicBeatsWithModel:(id)a0 currentPlayBackTime:(double)a1 defaultDuration:(double)a2;


@end
