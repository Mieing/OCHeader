@class ACCInfoStickerCreateModelGenerator, AWEVideoPublishViewModel;
@protocol AEKInfoStickerEditor, AEKMegaEditor, AWEEditKit, AEKPreviewEditor, AEKRuntimeStickerEditor, ACCInfoStickerConfigProvider;

@interface ACCRefactorInfoStickerHandler : ACCStickerHandler

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (weak, nonatomic) id<AWEEditKit> editKit;
@property (retain, nonatomic) ACCInfoStickerCreateModelGenerator *createModelGenerator;
@property (weak, nonatomic) id<AEKInfoStickerEditor> infoStickerEditor;
@property (weak, nonatomic) id<AEKPreviewEditor> preview;
@property (weak, nonatomic) id<AEKRuntimeStickerEditor> runtimeSticker;
@property (weak, nonatomic) id<ACCInfoStickerConfigProvider> configProvider;
@property (copy, nonatomic) id /* block */ stickerMirrorBlock;

- (BOOL)canRecoverSticker:(id)a0;
- (void)recoverSticker:(id)a0;
- (BOOL)canExpressSticker:(id)a0;
- (void)expressSticker:(id)a0 onCompletion:(id /* block */)a1;
- (void)expressSticker:(id)a0;
- (id)processURSWithPath:(id)a0;
- (id)configWithSticker:(id)a0;
- (void)saveAndApplySticker:(id)a0 config:(id)a1 draftFilePrefix:(id)a2 completionBlock:(id /* block */)a3;
- (void)compressImageData:(id)a0 config:(id)a1 onCompletion:(id /* block */)a2;
- (id)initWithRepository:(id)a0 megaEditor:(id)a1 editKit:(id)a2 createModelGenerator:(id)a3;
- (void)updateDynamicInfoWithSticker:(id)a0;
- (void)applyStickerWithContext:(id)a0 stickerConfig:(id)a1 needExtra:(BOOL)a2;
- (void)trackNotFoundStickerId:(id)a0;
- (void)trackAddStickerInVideoCoverPageIfNeeded;
- (void)applyInfoStickerConfig:(id)a0 completion:(id /* block */)a1;
- (void)applyCustomStickerConfig:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
