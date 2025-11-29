@class IESLiveLinkMicAudienceGetLinkmicInfoWithRtcInfoResponse_ResponseData;

@interface IESLiveLinkMicAudienceGetLinkmicInfoWithRtcInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceGetLinkmicInfoWithRtcInfoResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
