@class IESLiveLinkMicAudienceUpdateMcResponse_ResponseData;

@interface IESLiveLinkMicAudienceUpdateMcResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceUpdateMcResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
