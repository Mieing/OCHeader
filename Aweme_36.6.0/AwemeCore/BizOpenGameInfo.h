@class NSString, HTSLiveImage;

@interface BizOpenGameInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *iconImage;
@property (nonatomic) BOOL hasIconImage;
@property (copy, nonatomic) NSString *gameTitle;
@property (copy, nonatomic) NSString *inviteTitle;

+ (id)descriptor;

@end
