@class IESEffectModel, NSMutableArray;

@interface AWEStickerApplySavePhotoHandler : AWEStickerApplyBaseHandler

@property (retain, nonatomic) IESEffectModel *currentSticker;
@property (retain, nonatomic) NSMutableArray *stickerSavePhotoNames;

- (void)camera:(id)a0 didTakeAction:(long long)a1 error:(id)a2 data:(id)a3;
- (void)camera:(id)a0 didRecvMessage:(id)a1;
- (void)camera:(id)a0 willApplySticker:(id)a1 propSource:(long long)a2;
- (void)camera:(id)a0 didApplySticker:(id)a1 success:(BOOL)a2;
- (void)p_fetchStickerWaterMarkImage:(id)a0;
- (void)p_handleStickerSavePhoto:(id)a0;
- (void).cxx_destruct;

@end
