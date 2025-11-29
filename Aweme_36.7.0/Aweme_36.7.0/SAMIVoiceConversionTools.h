@interface SAMIVoiceConversionTools : NSObject

+ (void)recoverVCEffectToEditService:(id)a0 publishModel:(id)a1;
+ (void)removeVCEffectToEditService:(id)a0 publishModel:(id)a1;
+ (BOOL)assetIsVoiceConversionEffect:(id)a0 publishModel:(id)a1;
+ (void)cleanUpVoiceChangeOfContext:(id)a0 editService:(id)a1;
+ (id)timeRangeOfAsset:(id)a0 ofContext:(id)a1 defaultAttachTime:(double)a2;
+ (id)filteVCAssetOfAssets:(id)a0 context:(id)a1;
+ (void)applyVCResult:(id)a0 previewFile:(id)a1 toEditService:(id)a2 ofContext:(id)a3;

@end
