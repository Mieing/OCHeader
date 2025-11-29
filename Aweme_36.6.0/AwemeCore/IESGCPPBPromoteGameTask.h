@class NSString;

@interface IESGCPPBPromoteGameTask : GPBMessage

@property (nonatomic) long long taskType;
@property (copy, nonatomic) NSString *taskId;

+ (id)descriptor;

@end
