@class NSString;

@interface IESLiveChorusRankUser_FollowInfo : IESLivePBBaseMessage

@property (nonatomic) long long followStatus;
@property (copy, nonatomic) NSString *remarkName;

+ (id)descriptor;

@end
