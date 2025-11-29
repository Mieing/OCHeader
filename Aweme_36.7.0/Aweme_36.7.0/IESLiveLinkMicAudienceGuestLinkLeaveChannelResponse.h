@class IESLiveLinkMicAudienceGuestLinkLeaveChannelResponse_ResponseData;

@interface IESLiveLinkMicAudienceGuestLinkLeaveChannelResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceGuestLinkLeaveChannelResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
