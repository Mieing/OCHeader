@class UpdateEffectGameConfigResponse_ResponseData;

@interface UpdateEffectGameConfigResponse : IESLivePBBaseMessage

@property (retain, nonatomic) UpdateEffectGameConfigResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
