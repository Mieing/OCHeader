@class IESLiveKtvProfitGetRealTimeChorusConfigResponse_ResponseData;

@interface IESLiveKtvProfitGetRealTimeChorusConfigResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvProfitGetRealTimeChorusConfigResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
