@class NSString, IESLiveOpenGameConfig;

@interface IESLiveLinkMicBizExtra : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveOpenGameConfig *openGameConfig;
@property (nonatomic) BOOL hasOpenGameConfig;
@property (copy, nonatomic) NSString *inviteRequestSource;

+ (id)descriptor;

@end
