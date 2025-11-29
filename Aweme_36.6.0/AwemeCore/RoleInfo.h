@class NSString;

@interface RoleInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *rankLevel;
@property (copy, nonatomic) NSString *rankIcon;
@property (copy, nonatomic) NSString *score;
@property (copy, nonatomic) NSString *scoreIcon;
@property (copy, nonatomic) NSString *heroRank;
@property (copy, nonatomic) NSString *heroRankIcon;
@property (copy, nonatomic) NSString *roleName;
@property (copy, nonatomic) NSString *roleIcon;
@property (nonatomic) BOOL isLogin;

+ (id)descriptor;

@end
