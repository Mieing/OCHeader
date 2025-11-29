@class HTSLiveGuestLinkChannelInfo;

@interface IESLiveLinkMicAudienceGuestLinkJoinLinkedChannelResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveGuestLinkChannelInfo *channelInfo;
@property (nonatomic) BOOL hasChannelInfo;
@property (nonatomic) long long curTimeMs;

+ (id)descriptor;

@end
