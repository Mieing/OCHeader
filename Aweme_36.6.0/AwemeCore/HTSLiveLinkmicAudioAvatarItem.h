@class NSString, HTSLiveImage;

@interface HTSLiveLinkmicAudioAvatarItem : IESLivePBBaseMessage

@property (nonatomic) long long avatarId;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) int verifyStatus;
@property (copy, nonatomic) NSString *unPassReason;
@property (nonatomic) long long updateTime;

+ (id)descriptor;

@end
