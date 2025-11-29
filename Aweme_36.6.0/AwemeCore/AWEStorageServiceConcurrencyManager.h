@interface AWEStorageServiceConcurrencyManager : NSObject

@property long long currentConcurrentCount;
@property (nonatomic) long long maxConcurrentCount;

+ (id)sharedInstance;

- (void)startTask;
- (id)init;
- (void)finishTask;

@end
