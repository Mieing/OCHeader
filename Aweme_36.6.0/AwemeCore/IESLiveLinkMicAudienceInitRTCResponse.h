@class IESLiveLinkMicAudienceInitRTCResponse_ResponseData;

@interface IESLiveLinkMicAudienceInitRTCResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceInitRTCResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
