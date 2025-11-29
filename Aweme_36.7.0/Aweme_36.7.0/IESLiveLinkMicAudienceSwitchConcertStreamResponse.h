@class IESLiveLinkMicAudienceSwitchConcertStreamResponse_ResponseData;

@interface IESLiveLinkMicAudienceSwitchConcertStreamResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceSwitchConcertStreamResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
