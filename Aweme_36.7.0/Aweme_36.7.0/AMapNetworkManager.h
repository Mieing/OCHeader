@class NSOperationQueue;

@interface AMapNetworkManager : NSObject

@property (readonly, nonatomic) NSOperationQueue *operationQueue;

+ (id)sendSynchronousRequestWithReformer:(id)a0 returningResponse:(id *)a1 error:(id *)a2;
+ (id)defaultManager;

- (id)startOperationWithRequestReformer:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)cancelAllOperations;
- (id)init;
- (void)startOperation:(id)a0;
- (void)dealloc;

@end
