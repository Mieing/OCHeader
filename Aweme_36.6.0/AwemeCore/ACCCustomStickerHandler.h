@class ACCInfoStickerHandler, AWEVideoPublishViewModel;
@protocol ACCEditServiceProtocol;

@interface ACCCustomStickerHandler : ACCStickerHandler

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) ACCInfoStickerHandler *infoStickerHandler;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;

- (BOOL)canExpressSticker:(id)a0;
- (void)expressSticker:(id)a0 onCompletion:(id /* block */)a1;
- (void)expressSticker:(id)a0;
- (id)infoStickerPropsFromLocation:(id)a0;
- (void)checkIfStaticInfoStickerWithStrickerId:(long long)a0;
- (void)saveAndApplySticker:(id)a0 config:(id)a1 draftFilePrefix:(id)a2 completionBlock:(id /* block */)a3;
- (void)compressImageData:(id)a0 config:(id)a1 onCompletion:(id /* block */)a2;
- (id)contextFromCustomSticker:(id)a0 path:(id)a1 tabName:(id)a2;
- (void).cxx_destruct;

@end
