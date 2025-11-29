@class NSDictionary, NSString;

@interface BDARewardTaskPickContext : NSObject

@property (copy, nonatomic) NSDictionary *pickedTaskInfo;
@property (copy, nonatomic) NSString *taskType;
@property (nonatomic) long long taskAmount;
@property (copy, nonatomic) NSDictionary *taskInfo;
@property (nonatomic) unsigned long long pickType;

- (id)initWithPickedTaskInfo:(id)a0;
- (void).cxx_destruct;

@end
