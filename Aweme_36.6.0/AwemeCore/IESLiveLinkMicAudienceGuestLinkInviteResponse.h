@class IESLiveLinkMicAudienceGuestLinkInviteResponse_ResponseData;

@interface IESLiveLinkMicAudienceGuestLinkInviteResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceGuestLinkInviteResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
