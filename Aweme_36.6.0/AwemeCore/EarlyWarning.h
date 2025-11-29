@class NSString;

@interface EarlyWarning : IESLivePBBaseMessage

@property (nonatomic) long long startTime;
@property (nonatomic) long long punishTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *punishAction;

+ (id)descriptor;

@end
