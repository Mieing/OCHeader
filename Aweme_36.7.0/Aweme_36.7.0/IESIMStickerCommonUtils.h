@interface IESIMStickerCommonUtils : NSObject

+ (id)emoticonModelFromStickerModel:(id)a0;
+ (id)im_safeURL:(id)a0;
+ (id)viewModelWithEmoticonModel:(id)a0 placeholder:(id)a1;
+ (id)getRandomVariantIfNeeded:(id)a0;
+ (id)emojiIDWithEmoticonModel:(id)a0;
+ (id)applyVariantName:(id)a0 withEmoticonModel:(id)a1;
+ (void)applyVariant:(id)a0 toModel:(id)a1;

@end
