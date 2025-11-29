@class IESLiveLinkMicAudienceGenRTCParamResponse_ResponseData;

@interface IESLiveLinkMicAudienceGenRTCParamResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceGenRTCParamResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
