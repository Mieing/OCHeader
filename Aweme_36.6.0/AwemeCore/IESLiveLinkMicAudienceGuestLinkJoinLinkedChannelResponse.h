@class IESLiveLinkMicAudienceGuestLinkJoinLinkedChannelResponse_ResponseData;

@interface IESLiveLinkMicAudienceGuestLinkJoinLinkedChannelResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceGuestLinkJoinLinkedChannelResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
