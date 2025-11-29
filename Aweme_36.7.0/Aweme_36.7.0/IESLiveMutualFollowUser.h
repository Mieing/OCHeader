@class NSString;

@interface IESLiveMutualFollowUser : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *nickName;

+ (id)descriptor;

@end
