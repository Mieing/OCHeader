@class IESLiveKtvProfitLeaveChorusResponse_ResponseData;

@interface IESLiveKtvProfitLeaveChorusResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvProfitLeaveChorusResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
