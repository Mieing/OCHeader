@class AWEARTextInputViewController, IESEffectModel;

@interface AWEStickerApplyARTextInputHandler : AWEStickerApplyBaseHandler

@property (retain, nonatomic) AWEARTextInputViewController *arTextInputViewController;
@property (retain, nonatomic) IESEffectModel *currentSticker;

- (void)camera:(id)a0 didRecvMessage:(id)a1;
- (void)camera:(id)a0 didApplySticker:(id)a1 success:(BOOL)a2;
- (void).cxx_destruct;

@end
