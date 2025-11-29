@class NSString, NSMutableArray;
@protocol AEKSimpleTextStickerEditor;

@interface ACCSimpleTextAbilityImpl : ACCBaseStickerEditorImpl <ACCSimpleTextAbility>

@property (retain, nonatomic) NSMutableArray *stickerIdListForHasCache;
@property (weak, nonatomic) id<AEKSimpleTextStickerEditor> simpleTextStickerEditor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeWithStickerId:(id)a0;
- (void)renderStickerViewWithStickerId:(id)a0;
- (void)removeNLEStickerWithStickerId:(id)a0;
- (id)updateStickerViewWithSticker:(id)a0 config:(id)a1;
- (void)forceRenderStickerViewWithStickerId:(id)a0;
- (void)renderStickerViewWithSticker:(id)a0 forceRender:(BOOL)a1 forceUpdateView:(BOOL)a2;
- (void)updateStickerBoundingBoxToCacheWithSticker:(id)a0 forceRender:(BOOL)a1;
- (void)renderStickerViewsIfNeeded;
- (void)renderStickerViewWithSticker:(id)a0 forceRender:(BOOL)a1 forceUpdateView:(BOOL)a2 needHiddenSubview:(BOOL)a3;
- (void)updateSubViewWithTemplateStickerView:(id)a0 centerInScreen:(struct CGPoint { double x0; double x1; })a1 sticker:(id)a2;
- (void)updateStickerBboxToCacheWithStickerId:(id)a0;
- (void).cxx_destruct;

@end
