@interface NetJob : NSObject

@property BOOL isTotalQuery;

+ (void)responseHandler:(id)a0 response:(id)a1 jobResultBlock:(id /* block */)a2 isCancel:(BOOL)a3 sliceInfo:(id)a4 isTotalQuery:(BOOL)a5 error:(id)a6;

- (void)startWithInfo:(id)a0 jobResultBlock:(id /* block */)a1 progressBlock:(id /* block */)a2 isCompletedMsg:(BOOL)a3;
- (void)reset;
- (void)cancel;

@end
