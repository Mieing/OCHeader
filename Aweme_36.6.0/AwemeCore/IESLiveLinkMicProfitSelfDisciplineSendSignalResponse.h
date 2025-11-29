@class IESLiveLinkMicProfitSelfDisciplineSendSignalResponse_ResponseData;

@interface IESLiveLinkMicProfitSelfDisciplineSendSignalResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicProfitSelfDisciplineSendSignalResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
