@class NSString;
@protocol AEKTextStickerEditor;

@interface ACCOldTextAbilityImpl : ACCBaseStickerEditorImpl <ACCOldTextAbility>

@property (weak, nonatomic) id<AEKTextStickerEditor> textStickerEditor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeWithStickerId:(id)a0;
- (void)renderStickerViewWithStickerId:(id)a0;
- (void)removeNLEStickerWithStickerId:(id)a0;
- (id)updateStickerViewWithSticker:(id)a0 config:(id)a1;
- (void)forceRenderStickerViewWithStickerId:(id)a0;
- (void)updateColor:(id)a0 stickerId:(id)a1 atClipIndex:(long long)a2;
- (void)updateTextStyle:(unsigned long long)a0 stickerId:(id)a1 atClipIndex:(long long)a2;
- (void)updateTextAlignment:(long long)a0 stickerId:(id)a1 atClipIndex:(long long)a2;
- (void)updateTextFont:(id)a0 stickerId:(id)a1 atClipIndex:(long long)a2;
- (void)renderStickerViewWithSticker:(id)a0 forceRender:(BOOL)a1 forceUpdateView:(BOOL)a2;
- (void)updateStickerBoundingBoxToCacheWithSticker:(id)a0 forceRender:(BOOL)a1;
- (void)renderStickerViewsIfNeeded;
- (void)updateStickerClip:(id)a0 color:(id)a1 style:(unsigned long long)a2;
- (void)renderStickerViewWithSticker:(id)a0 forceRender:(BOOL)a1 forceUpdateView:(BOOL)a2 needHiddenSubview:(BOOL)a3;
- (void)updateSubViewWithTemplateStickerView:(id)a0 centerInScreen:(struct CGPoint { double x0; double x1; })a1 sticker:(id)a2;
- (id)addStickerWithResource:(id)a0 textModelMap:(id)a1 locationModel:(id)a2;
- (void)updateStickerBboxToCacheWithStickerId:(id)a0;
- (void).cxx_destruct;

@end
