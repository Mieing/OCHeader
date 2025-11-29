@interface VETextPackager : NSObject

+ (id)fontPathAtFolder:(id)a0;
+ (id)p_styleParamDicOfTextStyleFromClip:(struct shared_ptr<cut::model::NLEStyText> { struct NLEStyText *x0; struct __shared_weak_count *x1; })a0 resourceFinder:(id)a1;
+ (id)p_styleAnimDicOfTextClip:(struct shared_ptr<cut::model::NLEStyStickerAnim> { struct NLEStyStickerAnim *x0; struct __shared_weak_count *x1; })a0 resourceFinder:(id)a1;
+ (id)textStickerParamWithSlot:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a0 resourceFinder:(id)a1;
+ (id)textTemplateDependResourceParamsOfSlot:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a0 resourceFinder:(id)a1;
+ (id)textTemplateTextParamsOfSlot:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a0 model:(struct shared_ptr<const cut::model::NLEModel> { struct NLEModel *x0; struct __shared_weak_count *x1; })a1 resourceFinder:(id)a2;

@end
