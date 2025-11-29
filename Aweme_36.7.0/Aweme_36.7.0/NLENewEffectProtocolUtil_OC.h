@interface NLENewEffectProtocolUtil_OC : NSObject

+ (id)convertCPPSlotToOCSlot:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a0;
+ (id)convertPrefabToNLETrackSlotWithSegmentType:(unsigned long long)a0 trackIndex:(int)a1 resourceType:(unsigned long long)a2 resourcePath:(id)a3 stickerPath:(id)a4 useLayerSticker:(BOOL)a5 draftSceneUrs:(id)a6 draftScenePath:(id)a7;
+ (id)convertPrefabToNLETrackSlotWithSegmentType:(unsigned long long)a0 trackIndex:(int)a1 resourceType:(unsigned long long)a2 resourcePath:(id)a3 trackSlot:(id)a4 stickerPath:(id)a5 useLayerSticker:(BOOL)a6 draftSceneUrs:(id)a7 draftScenePath:(id)a8;
+ (id)convertEffectJsonToNLETrackSlot:(id)a0;
+ (id)convertPrefabToNLETrackSlotWithSegmentType:(unsigned long long)a0 resourcePath:(id)a1 stickerPath:(id)a2 useLayerSticker:(BOOL)a3;
+ (id)convertAmazingToNLETrackSlotWithResourcePath:(id)a0 trackIndex:(int)a1;
+ (long long)updateSegmentPackageInfo:(id)a0 templateModel:(id)a1;
+ (id)convertNewTextTemplateJsonToNLETrackSlot:(id)a0;
+ (id)convertTextClipJsonToNLETextClip:(id)a0;
+ (id)convertNewTextTemplateTrackSlotToParamString:(id)a0 nleSegmentTextTemplate:(id)a1 draftPath:(id)a2;
+ (id)convertTextTemplateTrackSlotToParamString:(id)a0 nleSegmentTextTemplate:(id)a1 draftPath:(id)a2;
+ (void)fillNewTextTemplateTrackSlots:(id)a0 fromTextProtocol:(id)a1;
+ (void)updateNewTextTemplateParam:(id)a0 fromTextProtocol:(id)a1;
+ (id)parseNewTextTemplateTextProtocol:(id)a0;
+ (id)getNewTextTemplateTagList:(id)a0;
+ (BOOL)containsType:(int)a0 type:(unsigned long long)a1;
+ (void)mergeCaptionDurationInfo:(id)a0 captionDurationMap:(id)a1;

@end
