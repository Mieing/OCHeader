@class NSString;

@interface TaskCenterExtraInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *taskPageSchema;
@property (copy, nonatomic) NSString *profitPageSchema;
@property (copy, nonatomic) NSString *awardUnit;

+ (id)descriptor;

@end
