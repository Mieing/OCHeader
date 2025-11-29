@class HTSLiveLinkmicAudioAvatarItem;

@interface IESLiveLinkMicProfitSwitchAudioAvatarListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveLinkmicAudioAvatarItem *avatarItem;
@property (nonatomic) BOOL hasAvatarItem;

+ (id)descriptor;

@end
