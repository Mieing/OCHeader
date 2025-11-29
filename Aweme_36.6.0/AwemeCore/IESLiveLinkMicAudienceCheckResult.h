@class NSString;

@interface IESLiveLinkMicAudienceCheckResult : IESLivePBBaseMessage

@property (nonatomic) int permission;
@property (nonatomic) BOOL isSupport;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
