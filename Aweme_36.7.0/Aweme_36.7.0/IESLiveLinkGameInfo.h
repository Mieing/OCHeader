@class NSString, IESLiveLinkMicBizExtra;

@interface IESLiveLinkGameInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *gameAppId;
@property (copy, nonatomic) NSString *gameExtra;
@property (copy, nonatomic) NSString *openId;
@property (copy, nonatomic) NSString *initParam;
@property (copy, nonatomic) NSString *linkExtra;
@property (retain, nonatomic) IESLiveLinkMicBizExtra *linkBizExtra;
@property (nonatomic) BOOL hasLinkBizExtra;

+ (id)descriptor;

@end
