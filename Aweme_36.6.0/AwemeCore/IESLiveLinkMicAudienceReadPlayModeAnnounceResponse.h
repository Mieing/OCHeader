@class IESLiveLinkMicAudienceReadPlayModeAnnounceResponse_ResponseData;

@interface IESLiveLinkMicAudienceReadPlayModeAnnounceResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceReadPlayModeAnnounceResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
