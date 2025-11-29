@class NSString;

@interface BattleAttachedInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSString *activityId;
@property (copy, nonatomic) NSString *traceId;
@property (copy, nonatomic) NSString *strategyLogId;
@property (nonatomic) long long reserveId;
@property (nonatomic) long long reserveSettleSource;

+ (id)descriptor;

@end
