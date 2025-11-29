@class HTSLiveGuestLinkChannelInfo, NSString;

@interface IESLiveLinkMicAudienceGuestLinkEnterChannelResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveGuestLinkChannelInfo *channelInfo;
@property (nonatomic) BOOL hasChannelInfo;
@property (copy, nonatomic) NSString *streamData;
@property (nonatomic) long long currentTimeMs;

+ (id)descriptor;

@end
