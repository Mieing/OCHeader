@class IESLiveLinkMicAudienceSendSignalResponse_ResponseData;

@interface IESLiveLinkMicAudienceSendSignalResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceSendSignalResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
