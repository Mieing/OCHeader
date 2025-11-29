@class IESEffectModel;

@interface AWEStickerApplyRecordPropLocationHandler : AWEStickerApplyBaseHandler

@property (retain, nonatomic) IESEffectModel *appliedSticker;

- (void)camera:(id)a0 didTakeAction:(long long)a1 error:(id)a2 data:(id)a3;
- (void)camera:(id)a0 didRecvMessage:(id)a1;
- (void)camera:(id)a0 didApplySticker:(id)a1 success:(BOOL)a2;
- (void).cxx_destruct;

@end
