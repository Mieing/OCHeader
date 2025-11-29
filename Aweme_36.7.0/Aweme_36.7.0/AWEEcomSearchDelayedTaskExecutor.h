@class NSLock, NSMutableDictionary;

@interface AWEEcomSearchDelayedTaskExecutor : NSObject

@property (retain, nonatomic) NSLock *taskCenterLock;
@property (retain, nonatomic) NSMutableDictionary *taskBlocks;
@property (retain, nonatomic) NSMutableDictionary *taskCenter;

+ (id)sharedExecutor;

- (id)performTask:(id /* block */)a0 afterDelay:(double)a1 identifier:(id)a2;
- (void)executeTaskImmediatelyWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)cancelTaskWithIdentifier:(id)a0;

@end
