@class TTUploadManager, TTUploadDispatcher;

@interface TTUploadApi : NSObject {
    TTUploadManager *uploadManager;
    TTUploadDispatcher *dispatcher;
}

+ (id)shareInstance;

- (void)startUploadWithParams:(id)a0 progress:(id /* block */)a1 result:(id /* block */)a2;
- (void)cancelTaskAsync:(id)a0 isSync:(BOOL)a1 result:(id /* block */)a2;
- (void)dispatchTask:(id)a0 userParameters:(id)a1 resultBlock:(id /* block */)a2 progress:(id /* block */)a3 work:(id /* block */)a4;
- (long long)getAllTaskCount;
- (long long)getQueueWaitTaskCount;
- (void)reportResult:(long long)a0 result:(id /* block */)a1 param:(id)a2;
- (BOOL)checkNSDataAndWriteFile:(id)a0 result:(id /* block */)a1;
- (BOOL)isParamValid:(id)a0;
- (id /* block */)getDelegateCallback:(id /* block */)a0;
- (void)runStart:(id)a0 progress:(id /* block */)a1 result:(id /* block */)a2;
- (void)runQuery:(id)a0 progressInfo:(id /* block */)a1;
- (void)queryTaskAsync:(id)a0 progressInfo:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
