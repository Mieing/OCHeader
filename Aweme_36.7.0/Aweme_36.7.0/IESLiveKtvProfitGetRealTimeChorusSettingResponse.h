@class IESLiveKtvProfitGetRealTimeChorusSettingResponse_ResponseData;

@interface IESLiveKtvProfitGetRealTimeChorusSettingResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvProfitGetRealTimeChorusSettingResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
