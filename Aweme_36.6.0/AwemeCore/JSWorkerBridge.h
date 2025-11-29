@class NSMutableArray;

@interface JSWorkerBridge : NSObject

@property (retain, nonatomic) NSMutableArray *executors;

- (void)addExecutor:(id)a0;
- (void)executeMethodWithMessage:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
