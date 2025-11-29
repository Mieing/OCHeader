@class IESLiveLinkMicAudienceGuestLinkEnterChannelResponse_ResponseData;

@interface IESLiveLinkMicAudienceGuestLinkEnterChannelResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceGuestLinkEnterChannelResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
