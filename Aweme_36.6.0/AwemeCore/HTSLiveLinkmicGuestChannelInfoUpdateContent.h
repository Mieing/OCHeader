@class HTSLiveGuestLinkChannelInfo;

@interface HTSLiveLinkmicGuestChannelInfoUpdateContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveGuestLinkChannelInfo *channelInfo;
@property (nonatomic) BOOL hasChannelInfo;
@property (nonatomic) long long currentTimeMs;

+ (id)descriptor;

@end
