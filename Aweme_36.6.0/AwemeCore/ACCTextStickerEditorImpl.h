@class NSArray, NSString;
@protocol AEKNewTextStickerEditor;

@interface ACCTextStickerEditorImpl : ACCBaseStickerEditorImpl <ACCTextAbility>

@property (retain, nonatomic) NSArray *validSourceTypeList;
@property (weak, nonatomic) id<AEKNewTextStickerEditor> textNewStickerEditor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeWithStickerId:(id)a0;
- (void)renderStickerViewWithStickerId:(id)a0;
- (id)stickerDataWithStickerId:(id)a0;
- (void)addTextStickerViewWithConfig:(id)a0 stickerId:(id)a1;
- (id)addTextStickerWithConfig:(id)a0;
- (void)setSticker:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)removeNLEStickerWithStickerId:(id)a0;
- (void)changeTextWithOldText:(id)a0 newText:(id)a1 stickerId:(id)a2 clipIndex:(long long)a3 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (void)setLineMaxWidth:(double)a0 stickerId:(id)a1 clipIndex:(long long)a2;
- (void)updateClipTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 stickerId:(id)a1 index:(long long)a2;
- (void)updateStickerTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 stickerId:(id)a1 index:(long long)a2;
- (void)updateClipStickerWithStickerId:(id)a0 block:(id /* block */)a1;
- (void)updateShapeTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 stickerId:(id)a1 index:(long long)a2;
- (void)setTextReadModel:(id)a0 stickerId:(id)a1;
- (void)updateRichTextStyle:(id)a0 fontSize:(long long)a1 textColor:(id)a2 borderColor:(id)a3 borderWidth:(double)a4 shadowStyle:(id)a5;
- (void)updateTextClip:(id)a0 styleConfig:(id)a1;
- (id)addStickerWithResource:(id)a0 textModelMap:(id)a1 locationModel:(id)a2 isTextBackground:(BOOL)a3;
- (id)updateStickerViewWithSticker:(id)a0 config:(id)a1;
- (void)forceRenderStickerViewWithStickerId:(id)a0;
- (long long)renderTemplateTextStickerViews;
- (BOOL)disableChangeWithStickerId:(id)a0 clipIndex:(long long)a1 needCheckStyle:(BOOL)a2;
- (void)updateColor:(id)a0 stickerId:(id)a1 atClipIndex:(long long)a2;
- (void)updateTextStyle:(unsigned long long)a0 stickerId:(id)a1 atClipIndex:(long long)a2;
- (void)updateTextAlignment:(long long)a0 stickerId:(id)a1 atClipIndex:(long long)a2;
- (void)updateTextFont:(id)a0 stickerId:(id)a1 atClipIndex:(long long)a2;
- (id)templateStickerIds;
- (id)slotIdForOldTextTemplateSticker:(id)a0;
- (id)ttsBindingIdForOldTextTemplateSticker:(id)a0;
- (void)setupUIConfig:(id)a0 stickerId:(id)a1 abkConfig:(id)a2;
- (BOOL)isEmptyBboxWithSticker:(id)a0;
- (void)renderStickerViewWithSticker:(id)a0 forceRender:(BOOL)a1 forceUpdateView:(BOOL)a2;
- (void)updateStickerBoundingBoxToCacheWithSticker:(id)a0 forceRender:(BOOL)a1;
- (void)renderStickerViewWithSticker:(id)a0 forceRender:(BOOL)a1 forceUpdateView:(BOOL)a2 needHiddenSubview:(BOOL)a3;
- (void)updateSubViewWithTemplateStickerView:(id)a0 centerInScreen:(struct CGPoint { double x0; double x1; })a1 sticker:(id)a2;
- (void)updateStickerClip:(id)a0 color:(id)a1 style:(unsigned long long)a2 isTextBackground:(BOOL)a3;
- (void)saveBBoxWithSticker:(id)a0 boundingBoxMap:(id)a1;
- (id)stickerFromPresetTemplate;
- (id)textStickerWithId:(id)a0;
- (void).cxx_destruct;

@end
