@class IESLiveKtvProfitUpdateRealTimeChorusGuestStatusResponse_ResponseData;

@interface IESLiveKtvProfitUpdateRealTimeChorusGuestStatusResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvProfitUpdateRealTimeChorusGuestStatusResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
