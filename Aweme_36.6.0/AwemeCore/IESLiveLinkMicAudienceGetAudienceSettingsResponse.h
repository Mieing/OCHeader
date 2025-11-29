@class IESLiveLinkMicAudienceGetAudienceSettingsResponse_ResponseData;

@interface IESLiveLinkMicAudienceGetAudienceSettingsResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceGetAudienceSettingsResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
