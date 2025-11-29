@class AigcEffectBackgroundCheckResponse_Data;

@interface AigcEffectBackgroundCheckResponse : IESLivePBBaseMessage

@property (retain, nonatomic) AigcEffectBackgroundCheckResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
