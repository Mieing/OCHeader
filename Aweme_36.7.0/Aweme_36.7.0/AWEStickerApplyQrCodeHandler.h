@class NSString, IESEffectModel, UIImage;

@interface AWEStickerApplyQrCodeHandler : AWEStickerApplyBaseHandler

@property (copy, nonatomic) NSString *pixaloopImgK;
@property (retain, nonatomic) IESEffectModel *currentSticker;
@property (retain, nonatomic) UIImage *qrcodeImage;
@property (nonatomic) BOOL isRequestOnAir;

- (void)camera:(id)a0 didRecvMessage:(id)a1;
- (void)didSelectNewSticker:(id)a0 oldSticker:(id)a1;
- (void)camera:(id)a0 willApplySticker:(id)a1 propSource:(long long)a2;
- (void)p_resetWithSticker:(id)a0;
- (void)renderQrCodeImage;
- (void)sendEnterFromMsg:(id)a0;
- (void).cxx_destruct;

@end
