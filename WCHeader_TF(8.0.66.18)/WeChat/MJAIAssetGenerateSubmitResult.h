@class NSString;

@interface MJAIAssetGenerateSubmitResult : NSObject

@property (readonly, nonatomic) NSString *taskID;
@property (readonly, nonatomic) unsigned int nextQueryInterval;
@property (readonly, nonatomic) unsigned int maxRetryTimes;

- (id)initWithTaskID:(id)a0 nextQueryInterval:(unsigned int)a1 maxRetryTimes:(unsigned int)a2;
- (id)description;
- (void).cxx_destruct;

@end
