@interface ACCEditCutSameMVModel : NSObject

+ (BOOL)p_nleAudioEffectSetBGMWithVideoData:(id)a0 repository:(id)a1;
+ (void)p_nleCutSameMVModifyVolumeIfNeedWithVideoData:(id)a0 repository:(id)a1;
+ (void)p_addNewAudioTrackWithVideoData:(id)a0 playDuration:(double)a1 startSeconds:(double)a2 audioAsset:(id)a3;
+ (void)p_removeOldAudioTrackWithVideoData:(id)a0;
+ (void)p_setVolumeForCutsameVideo:(float)a0 videoData:(id)a1;
+ (void)p_setVolumeForAudio:(float)a0 videoData:(id)a1;
+ (id)generateCutSameMVWithRepository:(id)a0;
+ (void)replaceNLEBGMAudioWithRepository:(id)a0;

@end
