@class IESLiveLinkMicAudienceGuestLinkChannelFinishResponse_ResponseData;

@interface IESLiveLinkMicAudienceGuestLinkChannelFinishResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceGuestLinkChannelFinishResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
