@class RareGiftEffectSettingQueryResponse_ResponseData;

@interface RareGiftEffectSettingQueryResponse : IESLivePBBaseMessage

@property (retain, nonatomic) RareGiftEffectSettingQueryResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
