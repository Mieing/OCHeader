@interface AEKVolumeUtils : NSObject

+ (void)setVolumeForVideo:(float)a0 megaEditor:(id)a1;
+ (void)setVolumeForBGM:(float)a0 megaEditor:(id)a1;
+ (void)setVolumeForMainVideo:(float)a0 megaEditor:(id)a1;
+ (void)setVolumeForPGCAndUGC:(float)a0 megaEditor:(id)a1;
+ (void)setVolume:(double)a0 forAudioAssets:(id)a1 megaEditor:(id)a2;
+ (void)updateAllClipsVoiceVolume:(double)a0 megaEditor:(id)a1;
+ (void)setVolumeForCutsameVideo:(float)a0 megaEditor:(id)a1;
+ (void)setVolumeForGenericTemplate:(float)a0 megaEditor:(id)a1;
+ (void)setVideoVolume:(float)a0 onlyForMainVideo:(BOOL)a1 megaEditor:(id)a2;
+ (void)setVolumeForSubVideo:(float)a0 megaEditor:(id)a1;

@end
