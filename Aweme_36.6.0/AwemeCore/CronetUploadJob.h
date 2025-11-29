@class TTHttpTask;

@interface CronetUploadJob : NetJob

@property (retain) TTHttpTask *task;
@property BOOL isCancel;
@property (copy) id /* block */ onProgressBlock;

- (id)addHeaders:(id)a0 sliceInfo:(id)a1;
- (void)startWithInfo:(id)a0 jobResultBlock:(id /* block */)a1 progressBlock:(id /* block */)a2 isCompletedMsg:(BOOL)a3;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)cancel;

@end
