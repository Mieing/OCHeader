@class NSString;

@interface TaskCenterTreasureAlienRule : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *triggerEvent;
@property (nonatomic) long long triggerDelaySeconds;

+ (id)descriptor;

@end
