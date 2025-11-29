@class NSString, NSMutableDictionary, NSURLSession;

@interface WACanvasFileHelper : NSObject <NSURLSessionDataDelegate, NSURLSessionTaskDelegate>

@property (retain) NSURLSession *session;
@property (retain) NSMutableDictionary *dicCanvasId2TaskQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pathOfCacheDir;
+ (id)pathForResWithUrl:(id)a0;
+ (unsigned int)genDownloadTaskId;
+ (id)trimmingWhitespaceWithStr:(id)a0;

- (id)init;
- (void)dealloc;
- (id)subThread_syncGetFileDataWithUrl:(id)a0 canvasId:(id)a1;
- (void)cancelAllTask:(id)a0;
- (void)addTaskToQueue:(id)a0 canvasId:(id)a1 taskId:(unsigned int)a2;
- (void)removeTaskWithCanvasId:(id)a0 taskId:(unsigned int)a1;
- (id)syncDownloadFileWithUrl:(id)a0 filePath:(id)a1 canvasId:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void).cxx_destruct;

@end
