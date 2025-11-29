@class NSString, MultiMediaUploadProcessController, NSMutableArray;
@protocol RecordUploadCDNMgrDelegate;

@interface MultiMediaUploadUnifyMgr : NSObject <MultiMediaUploadProcessControllerDelegate>

@property (weak, nonatomic) id<RecordUploadCDNMgrDelegate> delegate;
@property (retain, nonatomic) MultiMediaUploadProcessController *currentTask;
@property (retain, nonatomic) NSMutableArray *arrUploadingTask;
@property (nonatomic) BOOL bJustUploadDataWithoutMD5Hit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)IsMultiMediaMsgUploading:(id)a0;
- (void)StartUploadMultiMediaMsg:(id)a0;
- (void)StopUploadMultiMediaMsg:(id)a0;
- (void)StopUploadMultiMediaMsgByUsername:(id)a0;
- (void)checkQueue;
- (id)getTaskWithMsgWrap:(id)a0;
- (void)onNeedUpdateMediaWrap:(id)a0 bitSet:(int)a1;
- (void)OnUploadProgressChanged:(id)a0 total:(unsigned long long)a1 remain:(unsigned long long)a2;
- (void)onUploadRecordMsgDataSuccess:(id)a0;
- (void)onHistoryRecordDataUploadFinish:(id)a0 cdnInfo:(id)a1 errorMsg:(id)a2;
- (void)onMultiMediaUploadProcessFlowFinish:(id)a0;
- (void).cxx_destruct;

@end
