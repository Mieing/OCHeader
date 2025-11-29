@class NSString;

@interface AWELuckyCatTaskDoneResponseTaskInfo : AWEBaseApiModel

@property (nonatomic) long long taskId;
@property (nonatomic) long long amount;
@property (nonatomic) long long taskDoneStatus;
@property (copy, nonatomic) NSString *taskKey;
@property (copy, nonatomic) NSString *taskName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
