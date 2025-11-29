@class GetEffectGameConfigResponse_ResponseData;

@interface GetEffectGameConfigResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetEffectGameConfigResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
