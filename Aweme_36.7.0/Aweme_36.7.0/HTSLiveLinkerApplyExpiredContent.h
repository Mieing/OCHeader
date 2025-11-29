@class NSString;

@interface HTSLiveLinkerApplyExpiredContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;

+ (id)descriptor;

@end
