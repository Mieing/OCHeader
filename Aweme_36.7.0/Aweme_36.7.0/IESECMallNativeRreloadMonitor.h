@interface IESECMallNativeRreloadMonitor : NSObject

@property (nonatomic) BOOL didFirstScreen;
@property (nonatomic) unsigned long long totleCountInFirstScreen;
@property (nonatomic) unsigned long long hitPreloadCountInFirstScreen;
@property (nonatomic) double preloadNativeCardStartTime;
@property (nonatomic) double preloadNativeCardEndTime;

- (id)init;

@end
