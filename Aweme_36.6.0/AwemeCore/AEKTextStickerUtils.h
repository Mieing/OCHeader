@interface AEKTextStickerUtils : NSObject

+ (id)originColorModelWithClip:(id)a0;
+ (id)textStyleModelWithColor:(id)a0 style:(unsigned long long)a1 isTextBackground:(BOOL)a2;
+ (BOOL)isWordSyncTTSWithSticker:(id)a0;
+ (id)textResourceWithEffect:(id)a0 dependFontParams:(id)a1 urs:(id)a2 resourceType:(unsigned long long)a3;
+ (id)fontResourceWithDependFontParams:(id)a0;
+ (BOOL)isEmptyWithSticker:(id)a0;
+ (unsigned long long)defaultIndexWithSticker:(id)a0;
+ (id)readContentWithSticker:(id)a0;
+ (BOOL)isInValidTimeRangeWithSticker:(id)a0 currTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (BOOL)isWordSyncTTSDubWordEditWithSticker:(id)a0;
+ (BOOL)isAIWritingSticker:(id)a0;
+ (id)aiWritingOriginalText:(id)a0;
+ (BOOL)hasTextTemplateFeatureType:(unsigned long long)a0 sticker:(id)a1;
+ (double)speechSpeedWithSticker:(id)a0;
+ (BOOL)shouldUseVideoVolumeWithSticker:(id)a0;
+ (id)presetUUIDWithSticker:(id)a0;
+ (id)accessibilityContentWithSticker:(id)a0;
+ (id)templateInfoWithNLETextTemplateInfo:(id)a0;
+ (id)localResourceWithFontModel:(id)a0;
+ (id)textResourceWithEffect:(id)a0 dependFontParams:(id)a1 urs:(id)a2;
+ (id)fontResourceWithABKConfig:(id)a0;
+ (id)localNewTextResourceWithRenderType:(long long)a0 sourceType:(long long)a1 fontModel:(id)a2;
+ (id)textNewResourceWithRenderType:(long long)a0 sourceType:(long long)a1 effect:(id)a2 dependFontParams:(id)a3 urs:(id)a4;

@end
