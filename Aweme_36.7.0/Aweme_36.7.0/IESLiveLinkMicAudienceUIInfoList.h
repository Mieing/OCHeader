@class NSString, HTSLiveImage;

@interface IESLiveLinkMicAudienceUIInfoList : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) long long type;
@property (nonatomic) BOOL canUse;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) BOOL canUseMultiAvatar;
@property (nonatomic) BOOL canUseStageEffects;

+ (id)descriptor;

@end
