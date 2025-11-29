@class MMTextStateMediaUploadTaskInfo, NSMutableArray;
@protocol MMTextStateMediaUploadCdnMgrDelegate;

@interface MMTextStateMediaUploadCdnMgr : MMObject <INetworkStatusMgrExt, ICdnComMgrExt>

@property (retain, nonatomic) NSMutableArray *taskQueue;
@property (retain, nonatomic) MMTextStateMediaUploadTaskInfo *curTaskInfo;
@property (weak, nonatomic) id<MMTextStateMediaUploadCdnMgrDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void)reloadQueue;
- (id)genTaskInfoWithSightDraftItem:(id)a0 thumbPath:(id)a1 tid:(id)a2;
- (id)createSightDraftWithVideoPath:(id)a0 thumbImg:(id)a1 editVideoAttr:(id)a2;
- (void)startUploadWithVideoPath:(id)a0 thumbImg:(id)a1 editVideoAttr:(id)a2 tid:(id)a3;
- (void)startUploadImageMedia:(id)a0 tid:(id)a1;
- (void)startUploadLivePhotoMedia:(id)a0 tid:(id)a1;
- (void)startUploadTextStateTaskInfo:(id)a0;
- (void)retryUploadTaskInfoWithTaskInfo:(id)a0;
- (void)CheckQueue;
- (void)startUploadTextStateTask;
- (void)addRetryQueueWithTask:(id)a0;
- (void)onTextStateUploadRetryFail:(id)a0;
- (void)onTextStateUploadCdnSuccess:(id)a0;
- (void)OnCdnInit;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnDownloadProgress:(id)a0;
- (void)OnCdnUploadProgress:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (void)reportCDNKV;
- (void).cxx_destruct;

@end
