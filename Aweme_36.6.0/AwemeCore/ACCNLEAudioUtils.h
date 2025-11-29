@interface ACCNLEAudioUtils : NSObject

+ (BOOL)isNLE:(id)a0 containTextReadingAudioAsset:(id)a1;
+ (void)_hotAppendAudioAsset:(id)a0 range:(id)a1 intoNLE:(id)a2 withConstructor:(id /* block */)a3;
+ (BOOL)isNLE:(id)a0 containAudioAsset:(id)a1;
+ (BOOL)needUpdateTime:(id)a0 ByRange:(id)a1;
+ (void)hotAppendTextReadingAudioAsset:(id)a0 range:(id)a1 intoNLE:(id)a2 withConstructor:(id /* block */)a3;
+ (void)hotAppendAudioAsset:(id)a0 range:(id)a1 intoNLE:(id)a2 withConstructor:(id /* block */)a3;
+ (void)setAudioClipRange:(id)a0 forAudioAsset:(id)a1 intoNLE:(id)a2;
+ (id)getCutSameAudioAssets:(id)a0;
+ (id)getPGCAndUGCAudioAssets:(id)a0;
+ (BOOL)trimBGMDurationAccordingToVideoTrackIfNeed:(id)a0;

@end
