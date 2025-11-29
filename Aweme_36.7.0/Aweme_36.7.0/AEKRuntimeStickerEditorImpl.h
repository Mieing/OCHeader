@class NSString;

@interface AEKRuntimeStickerEditorImpl : AEKBaseRuntimeEditor <AEKRuntimeStickerEditor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nle;
- (void)cleanInfoStickerBuffer:(id)a0;
- (void)setCaptionStickerImageBlock:(id /* block */)a0;
- (void)clearStickerPositionCache;
- (void)clearStickerPositionCacheWithId:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })newTextTemplateStickerRectForUUID:(id)a0 stickerId:(id)a1;
- (id)syncNewTextTemplateStickerRectMapWithStickerId:(id)a0;
- (void)setTextTemplateWithSlotUUID:(id)a0 anchor:(struct CGPoint { double x0; double x1; })a1 rotation:(double)a2 scale:(double)a3;
- (id)syncSizeWithStickerIds:(id)a0;
- (BOOL)isDynamicInfoStickerWithStickerId:(id)a0;
- (void)setInfoStickerWithSlotUUID:(id)a0 anchor:(struct CGPoint { double x0; double x1; })a1 rotation:(double)a2 scale:(double)a3 alpha:(double)a4;
- (struct CGSize { double x0; double x1; })syncSizeWithStickerId:(id)a0;
- (id)textTemplateInfoWithStickerId:(id)a0;
- (id)initWithData:(id)a0 subscriberProvider:(id)a1;
- (id)syncNewTextTemplateBboxInfoWithStickerId:(id)a0;
- (id)timeValidStickerMapWithIds:(id)a0;
- (struct CGSize { double x0; double x1; })sizeWithStickerId:(id)a0;
- (void)sizeWithStickerId:(id)a0 completion:(id /* block */)a1;

@end
