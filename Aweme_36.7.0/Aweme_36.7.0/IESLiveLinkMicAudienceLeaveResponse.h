@class IESLiveLinkMicAudienceLeaveResponse_ResponseData;

@interface IESLiveLinkMicAudienceLeaveResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceLeaveResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
