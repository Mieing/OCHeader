@interface VideoEncodeTaskParams : NSObject

@property (nonatomic) BOOL isHighPriority;
@property (nonatomic) BOOL isTaskReplicable;
@property (nonatomic) BOOL keepsProcessInBackground;
@property (nonatomic) BOOL isAutoRetryEnabled;

@end
