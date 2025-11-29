@class NSString;
@protocol AEKInfoStickerEditor;

@interface ACCInfoStickerAbilityImpl : ACCBaseStickerEditorImpl <ACCInfoStickerAbility>

@property (weak, nonatomic) id<AEKInfoStickerEditor> infoStickerEditor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeWithStickerId:(id)a0;
- (void)removeNLEStickerWithStickerId:(id)a0;
- (void)panSticker:(id)a0 anchor:(struct CGPoint { double x0; double x1; })a1;
- (void)pinchSticker:(id)a0 scaleFactor:(double)a1;
- (void)rotationSticker:(id)a0 rotation:(double)a1;
- (id)updateStickerViewWithSticker:(id)a0 config:(id)a1;
- (void)renderAndSaveBBoxWithSticker:(id)a0;
- (double)targetScaleWithNormStickerSize:(struct CGSize { double x0; double x1; })a0 createSticker:(id)a1;
- (BOOL)isEmptyBboxWithSticker:(id)a0;
- (void)updateDynamicStatusWithSticker:(id)a0;
- (BOOL)renderStickerViewWithSticker:(id)a0 forceRender:(BOOL)a1 forceUpdateView:(BOOL)a2;
- (void)saveBBoxWithSticker:(id)a0 currSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)updateStickerBoundingBoxToCacheWithSticker:(id)a0 forceRender:(BOOL)a1;
- (void)updateMinMaxScaleWithConfig:(id)a0 initNormSize:(struct CGSize { double x0; double x1; })a1 userInfo:(id)a2;
- (double)stickerOriginScaleWithStickerSize:(struct CGSize { double x0; double x1; })a0;
- (id)addStickerWithCreateSticker:(id)a0;
- (void)updateAuthorInfoWithId:(id)a0 createSticker:(id)a1;
- (void)mirrorXWithStickerId:(id)a0;
- (unsigned long long)renderStickerViewsIfNeeded;
- (void)updateWithStickerId:(id)a0 transparent:(BOOL)a1;
- (BOOL)isStaticInfoStickerWithId:(id)a0;
- (void).cxx_destruct;

@end
