@class IESLiveKtvProfitUpdateRealTimeChorusSwitchResponse_ResponseData;

@interface IESLiveKtvProfitUpdateRealTimeChorusSwitchResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvProfitUpdateRealTimeChorusSwitchResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
