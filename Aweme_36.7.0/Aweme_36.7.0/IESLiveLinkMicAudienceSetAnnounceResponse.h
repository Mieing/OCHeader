@class IESLiveLinkMicAudienceSetAnnounceResponse_ResponseData;

@interface IESLiveLinkMicAudienceSetAnnounceResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceSetAnnounceResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
