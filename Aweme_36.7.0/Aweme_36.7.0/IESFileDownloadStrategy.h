@class NSOperationQueue, NSMapTable, NSMutableArray;

@interface IESFileDownloadStrategy : NSObject

@property (weak, nonatomic) NSOperationQueue *downloadQueue;
@property (weak, nonatomic) NSMapTable *taskOperationMap;
@property (retain, nonatomic) NSMutableArray *executeTaskQueue;
@property (retain, nonatomic) NSMutableArray *waitTaskQueue;

- (void)pauseOneExecuteTaskIfNeed;
- (void)moveWaitTaskToExecute;
- (id)initWithDownloadQueue:(id)a0 taskOperationMap:(id)a1;
- (void)updateDownloadTask:(id)a0;
- (void)addDownloadTask:(id)a0 cancelExistDownloading:(BOOL)a1 insertFront:(BOOL)a2;
- (void)resumeTaskWithKeyIfNeed:(id)a0 insertFront:(BOOL)a1 cancelDownloading:(BOOL)a2 downloadProgress:(id /* block */)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
