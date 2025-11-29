@interface AEKMusicVolumeUtils : NSObject

+ (id)volumeConfig;
+ (BOOL)enableVolumeDBLiner;
+ (double)maxVolumeScale;
+ (double)maxDBGain;
+ (BOOL)enableVolumeUnify;
+ (BOOL)enableAlbumVolumeDBLiner;
+ (double)dbScaleValueFromSliderProgress:(double)a0;
+ (double)sliderProgressFromDBScaleValue:(double)a0;

@end
