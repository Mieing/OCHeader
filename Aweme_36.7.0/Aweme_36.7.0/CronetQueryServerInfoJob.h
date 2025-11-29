@class TTHttpTask;

@interface CronetQueryServerInfoJob : NetJob

@property (retain) TTHttpTask *task;
@property BOOL isCancel;

- (id)addHeaders:(id)a0 sliceInfo:(id)a1 isCompletedMsg:(BOOL)a2;
- (void)startWithInfo:(id)a0 jobResultBlock:(id /* block */)a1 progressBlock:(id /* block */)a2 isCompletedMsg:(BOOL)a3;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)cancel;

@end
