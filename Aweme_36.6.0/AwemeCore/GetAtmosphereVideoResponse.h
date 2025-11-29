@class GetAtmosphereVideoResponse_ResponseData;

@interface GetAtmosphereVideoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetAtmosphereVideoResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
