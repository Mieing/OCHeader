@class NSString, NSLock;

@interface AWEClientAILLMTask : NSObject

@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) id /* block */ executionBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (nonatomic) BOOL cancelBlockCalled;
@property (nonatomic) long long addedTimeMs;
@property (nonatomic) long long timeoutMs;

- (id)initWithGroup:(id)a0 executionBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (void)cancelWithReason:(unsigned long long)a0 isTaskRunning:(BOOL)a1;
- (void).cxx_destruct;
- (void)executeWithCompletion:(id /* block */)a0;

@end
