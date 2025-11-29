@class IESLiveLinkMicAudienceUpdateGuestLinkSettingsResponse_ResponseData;

@interface IESLiveLinkMicAudienceUpdateGuestLinkSettingsResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceUpdateGuestLinkSettingsResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
