@class NSString;

@interface IESGCPPBCharNumCheckPrompt : GPBMessage

@property (nonatomic) int minNum;
@property (copy, nonatomic) NSString *toast;

+ (id)descriptor;

@end
