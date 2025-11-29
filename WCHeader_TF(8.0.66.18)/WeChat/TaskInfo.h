@class NSString;

@interface TaskInfo : MMObject

@property (nonatomic) double taskAddTime;
@property (retain, nonatomic) NSString *taskBizKey;
@property (nonatomic) BOOL bIsPresented;

- (void).cxx_destruct;

@end
