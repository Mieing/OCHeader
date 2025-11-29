@class NSString;

@interface BattleUser : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (nonatomic) long long roomId;
@property (nonatomic) BOOL isMultiBattleAudience;

+ (id)descriptor;

@end
