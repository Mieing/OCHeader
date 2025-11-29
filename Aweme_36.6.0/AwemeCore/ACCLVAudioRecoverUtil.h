@interface ACCLVAudioRecoverUtil : NSObject

+ (void)recoverAudioIfNeededWithOption:(unsigned long long)a0 publishModel:(id)a1 editService:(id)a2 sequenceService:(id)a3;
+ (void)p_recoverMusicIfNeededWithPublishModel:(id)a0 editService:(id)a1;
+ (void)p_recoverVolumeIfNeededWithPublishModel:(id)a0 editService:(id)a1;
+ (void)p_recoverMusicRangeIfNeededWithPublishModel:(id)a0 editService:(id)a1;
+ (void)p_recoverVoiceChangerIfNeededWithPublishModel:(id)a0 editService:(id)a1;
+ (void)p_recoverVoiceConversionIfNeededWithPublishModel:(id)a0 editService:(id)a1;
+ (id)p_curBGMTrack:(id)a0;
+ (void)removeNetworkBGMAssets:(id)a0;
+ (void)resetAudioRepeatCountInPublishModel:(id)a0;
+ (void)removeAudioExceptUserEditAudioInVideoData:(id)a0 withoutTTSTrack:(BOOL)a1;
+ (void)p_replaceAudio:(id)a0 withPublishModel:(id)a1 editService:(id)a2;
+ (void)p_recoverBGMVolumeFrom:(id)a0 to:(id)a1;
+ (void)p_recoverBGMFadeInFadeOutFrom:(id)a0 to:(id)a1;
+ (void)p_recoverBGMKeyFrameFrom:(id)a0 to:(id)a1;
+ (void)recoverAudioIfNeededWithOption:(unsigned long long)a0 publishModel:(id)a1 editService:(id)a2;
+ (void)p_recoverTextReadingsIfNeededWithPublishModel:(id)a0 editService:(id)a1 sequenceService:(id)a2;
+ (void)p_recoverTextReadAudioIfNeeded:(id)a0 editService:(id)a1 sequenceService:(id)a2;

@end
