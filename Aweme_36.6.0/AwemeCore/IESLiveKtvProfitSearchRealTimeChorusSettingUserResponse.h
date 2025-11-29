@class IESLiveKtvProfitSearchRealTimeChorusSettingUserResponse_ResponseData;

@interface IESLiveKtvProfitSearchRealTimeChorusSettingUserResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvProfitSearchRealTimeChorusSettingUserResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
