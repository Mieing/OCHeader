@class IESLiveKtvProfitUpdateRealTimeChorusSettingResponse_ResponseData;

@interface IESLiveKtvProfitUpdateRealTimeChorusSettingResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvProfitUpdateRealTimeChorusSettingResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
