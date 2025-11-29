@class MMLiveResourceFetcherTask;

@interface MMLiveResourceFetcherTaskBatchedPriorityChange : NSObject

@property (retain, nonatomic) MMLiveResourceFetcherTask *task;
@property (nonatomic) struct { long long priorityClass; long long priorityValue; } desiredPriority;

- (void).cxx_destruct;

@end
