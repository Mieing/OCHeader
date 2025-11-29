@interface AWEStory25MusicShareStoryUtils : NSObject

+ (void)updateNLELyricInfoWith:(id)a0 range:(struct _HTSAudioRange { double x0; double x1; })a1;
+ (void)updateNLEBackgroundColorWith:(id)a0;
+ (void)replaceCoverWith:(id)a0;
+ (void)musicShareStoryUpdateTemplateWith:(id)a0 initialize:(BOOL)a1 skipCommit:(BOOL)a2;
+ (void)removePlaceHolderStickerWith:(id)a0;
+ (void)updateCoverWith:(id)a0;
+ (BOOL)isDefaultStickerTextContent:(id)a0 publishViewModel:(id)a1;
+ (id)updateCustomStickerStyleWith:(id)a0 defaultSticker:(BOOL)a1 defaultStickerText:(id)a2 publishViewModel:(id)a3;
+ (BOOL)customStickerStypeIsShowWith:(BOOL)a0 publishViewModel:(id)a1;

@end
