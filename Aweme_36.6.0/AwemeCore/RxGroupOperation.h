@class NSBlockOperation, NSString, NSMutableArray, RxOperationQueue;

@interface RxGroupOperation : RxOperation <RxOperationQueueDelegate>

@property (readonly, nonatomic) RxOperationQueue *internalQueue;
@property (readonly, nonatomic) NSBlockOperation *startingOperation;
@property (readonly, nonatomic) NSBlockOperation *finishingOperation;
@property (readonly, nonatomic) NSMutableArray *errors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)operation:(id)a0 didFinishedWithErrors:(id)a1;
- (void)operationQueue:(id)a0 opertionDidFinish:(id)a1 withErrors:(id)a2;
- (void).cxx_destruct;
- (void)addOperation:(id)a0;
- (void)execute;
- (id)initWithOperations:(id)a0;
- (void)cancel;
- (void)operationQueue:(id)a0 willAddOperation:(id)a1;

@end
