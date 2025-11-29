@class NSURLSession, NSMutableDictionary, NSString, NSMutableArray;

@interface MMWebOptimJSContextTaskLoader : MMObject <NSURLSessionTaskDelegate>

@property (retain, nonatomic) NSMutableArray *waitingQueue;
@property (retain, nonatomic) NSMutableDictionary *waitingMap;
@property (retain, nonatomic) NSMutableArray *loadingQueue;
@property (retain, nonatomic) NSMutableDictionary *loadingMap;
@property (retain, nonatomic) NSMutableArray *downloadTaskArr;
@property (retain, nonatomic) NSMutableDictionary *notifyQueueMap;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)loadTaskWithConfig:(id)a0 onSuccess:(id /* block */)a1 onFailed:(id /* block */)a2;
- (void)cancelAllTask;
- (void)setupURLSession;
- (void)checkWaitingQueue;
- (void)startDownloadWithContext:(id)a0;
- (void)callBackWithBlock:(id /* block */)a0;
- (void)callBackSuccessWithTaskId:(id)a0;
- (void)callBackFailWithTaskId:(id)a0;
- (void).cxx_destruct;

@end
