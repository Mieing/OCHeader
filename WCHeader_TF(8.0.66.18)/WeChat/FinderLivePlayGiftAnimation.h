@class NSString, NSData, FinderLivePlayGiftAnimationExtInfo;

@interface FinderLivePlayGiftAnimation : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *animationUrl;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int triggerType;
@property (retain, nonatomic) NSData *businessBuff;
@property (retain, nonatomic) NSString *landscapeAnimationUrl;
@property (retain, nonatomic) NSString *landscapeMd5;
@property (retain, nonatomic) FinderLivePlayGiftAnimationExtInfo *animationExtInfo;
@property (retain, nonatomic) FinderLivePlayGiftAnimationExtInfo *landscapeAnimationExtInfo;
@property (retain, nonatomic) NSString *toMicSdkUserId;

+ (void)initialize;

@end
