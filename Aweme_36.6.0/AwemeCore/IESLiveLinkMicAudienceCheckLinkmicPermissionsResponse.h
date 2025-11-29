@class IESLiveLinkMicAudienceCheckLinkmicPermissionsResponse_ResponseData;

@interface IESLiveLinkMicAudienceCheckLinkmicPermissionsResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceCheckLinkmicPermissionsResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
