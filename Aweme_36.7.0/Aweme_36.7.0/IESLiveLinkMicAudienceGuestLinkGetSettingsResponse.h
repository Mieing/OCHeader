@class IESLiveLinkMicAudienceGuestLinkGetSettingsResponse_ResponseData;

@interface IESLiveLinkMicAudienceGuestLinkGetSettingsResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceGuestLinkGetSettingsResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
