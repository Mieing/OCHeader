@class NSRecursiveLock, NSMutableDictionary, IESForestKit, NSMutableArray;

@interface IESForestRequestOperationManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *operationsDict;
@property (retain, nonatomic) NSRecursiveLock *operationDictLock;
@property (retain, nonatomic) NSMutableArray *operationsArray;
@property (retain, nonatomic) NSRecursiveLock *operationArrayLock;
@property (weak, nonatomic) IESForestKit *forestKit;

- (id)operationWithRequest:(id)a0 redirectHandler:(id /* block */)a1 headerHandler:(id /* block */)a2 dataHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)operationWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)_operationWithRequest:(id)a0 isStream:(BOOL)a1 operationDidCreated:(id /* block */)a2;
- (id)_possibleOperationWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)cancelAllOperations;
- (id)init;
- (void)removeOperation:(id)a0;

@end
