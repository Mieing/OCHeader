@class NSString, RoomChannelInfo, HTSLiveText;

@interface SecretChatResponse_ChannelInfo : IESLivePBBaseMessage

@property (retain, nonatomic) RoomChannelInfo *channelInfo;
@property (nonatomic) BOOL hasChannelInfo;
@property (retain, nonatomic) HTSLiveText *createTips;
@property (nonatomic) BOOL hasCreateTips;
@property (copy, nonatomic) NSString *guideToast;

+ (id)descriptor;

@end
