@class IESLiveLinkMicAudienceAudienceLeaveInfoResponse_ResponseData;

@interface IESLiveLinkMicAudienceAudienceLeaveInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceAudienceLeaveInfoResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
