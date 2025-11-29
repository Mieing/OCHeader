@class MMAppMsgDownloadDataBase, NSString;

@interface MMAppMsgDownloadMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MMAppMsgDownloadDataBase *database;
@property (nonatomic) BOOL shouldStopClean;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)cleanData;
- (void)appMsgStartUpload:(id)a0;
- (BOOL)checkAppMsgStartUploadNotCanAddDB:(id)a0;
- (void)appMsgNotUploadDoneDownload:(id)a0;
- (void)appMsgPauseUpload:(id)a0;
- (void)appMsgCompleteUpload:(id)a0 oriSvrId:(long long)a1;
- (void)appMsgDownloadStart:(id)a0;
- (void)appMsgDownloadPause:(id)a0;
- (void)appMsgDownloadDone:(id)a0;
- (void)appMsgDownloadFailed:(id)a0;
- (void)appMsgDownloadExpired:(id)a0;
- (BOOL)tryDownloadFromCloudBackup:(id)a0 oriItem:(id)a1;
- (unsigned int)getAppMsgDownloadStatus:(id)a0;
- (BOOL)checkUserStopUpload:(id)a0;
- (unsigned int)getAppMsgDownloadUiPercent:(id)a0;
- (void).cxx_destruct;

@end
