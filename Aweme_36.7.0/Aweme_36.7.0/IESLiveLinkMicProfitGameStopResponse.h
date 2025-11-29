@class IESLiveLinkMicProfitGameStopResponse_ResponseData;

@interface IESLiveLinkMicProfitGameStopResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicProfitGameStopResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
