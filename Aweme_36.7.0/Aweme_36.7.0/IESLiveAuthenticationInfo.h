@class NSString;

@interface IESLiveAuthenticationInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *verifyContent;

+ (id)descriptor;

@end
