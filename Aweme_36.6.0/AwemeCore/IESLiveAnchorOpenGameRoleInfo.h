@class NSString;

@interface IESLiveAnchorOpenGameRoleInfo : IESLivePBBaseMessage

@property (nonatomic) int role;
@property (copy, nonatomic) NSString *content;

+ (id)descriptor;

@end
