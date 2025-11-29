@interface TTUploadSliceTaskImpl : NSObject

@property BOOL isTaskInvalid;

- (id)initWithUploadInfo:(id)a0 onCompletedBlock:(id /* block */)a1 onProgressBlock:(id /* block */)a2;
- (void)cancel:(long long)a0;
- (void)start;
- (void)dealloc;

@end
