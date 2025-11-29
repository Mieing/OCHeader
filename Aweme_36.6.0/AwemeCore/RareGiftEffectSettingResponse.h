@class RareGiftEffectSettingResponse_ResponseData;

@interface RareGiftEffectSettingResponse : IESLivePBBaseMessage

@property (retain, nonatomic) RareGiftEffectSettingResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
