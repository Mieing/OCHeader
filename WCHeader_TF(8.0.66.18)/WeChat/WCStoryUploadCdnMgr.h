@class WCStoryUploadTaskInfo, NSMutableArray, NSString;
@protocol WCStoryUploadCdnMgrDelegate;

@interface WCStoryUploadCdnMgr : NSObject <INetworkStatusMgrExt, ICdnComMgrExt>

@property (retain, nonatomic) NSMutableArray *taskQueue;
@property (retain, nonatomic) NSMutableArray *retryQueue;
@property (retain, nonatomic) NSMutableArray *deleteQueue;
@property (retain, nonatomic) WCStoryUploadTaskInfo *curTaskInfo;
@property (retain, nonatomic) NSString *taskRetryPath;
@property (retain, nonatomic) NSString *taskUploadingPath;
@property (retain, nonatomic) NSString *taskUploadingShouldDeletePath;
@property (weak, nonatomic) id<WCStoryUploadCdnMgrDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void)syncQueueToLocal;
- (void)reloadQueueFromeLocal;
- (BOOL)IsDataItem:(id)a0 InQueue:(id)a1;
- (BOOL)deleteTaskWithTid:(id)a0 InQueue:(id)a1;
- (id)getUploadTaskInfoForTid:(id)a0;
- (id)getUploadTaskInfoForTid:(id)a0 inQueue:(id)a1;
- (BOOL)uploadTaskNeedDeleteWithTid:(id)a0;
- (void)deleteTaskInAllQueueWithTid:(id)a0;
- (BOOL)isTaskUploadingWithDataItem:(id)a0;
- (BOOL)isTaskRetryingWithDataItem:(id)a0;
- (void)startUploadStoryWithDataItem:(id)a0;
- (void)deleteUploadTaskWithDataIem:(id)a0;
- (void)retry;
- (void)CheckQueue;
- (void)CheckRetryQueue;
- (void)startUploadStoryTask;
- (void)startStoryPostCgiWithTask;
- (BOOL)canTaskRetryWithErrorType:(long long)a0;
- (void)reportCDNKV;
- (void)reportVideoArgsWhenPostSucc:(id)a0;
- (void)addRetryQueueWithTask:(id)a0;
- (void)onStoryUploadRetryFail:(id)a0;
- (void)onStoryUploadCdnSuccess:(id)a0;
- (void)OnCdnInit;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnDownloadProgress:(id)a0;
- (void)OnCdnUploadProgress:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (void).cxx_destruct;

@end
