@class NSString;

@interface HTSLiveUserInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (nonatomic) int level;

+ (id)descriptor;

@end
