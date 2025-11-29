@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface RTVOperationBlockObserver : NSObject <RTVOperationObserver>

@property (readonly, nonatomic) NSMutableArray *willExecuteCallbacks;
@property (readonly, nonatomic) NSMutableArray *executeFinishCallbacks;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)operationWillExecute:(id)a0;
- (void)operation:(id)a0 didFinishWithError:(id)a1;
- (BOOL)addStartExecuteCallback:(id /* block */)a0;
- (BOOL)addFinishExecuteCallback:(id /* block */)a0;
- (id)initWithOperation:(id)a0;
- (void).cxx_destruct;

@end
