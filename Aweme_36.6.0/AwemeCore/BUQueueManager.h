@class BUQueueManagerConfig;

@interface BUQueueManager : NSObject

@property (retain, nonatomic) BUQueueManagerConfig *config;

+ (id)sharedInstance;

- (void)updateConfig:(id)a0;
- (id)serialQueueWithHierarchy:(long long)a0 suffixLabel:(id)a1 outQueueName:(id *)a2;
- (id)_pbu_hierarchyStringWithHierarchy:(long long)a0;
- (id)concurrentQueueWithHierarchy:(long long)a0 suffixLabel:(id)a1 outQueueName:(id *)a2;
- (id)concurrentQueueWithHierarchy:(long long)a0 suffixLabel:(id)a1;
- (id)serialQueueWithHierarchy:(long long)a0 suffixLabel:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
