@class CdnRecordMediaInfo, NSMutableArray, NSString;
@protocol HandOffCDNUploadMgrDelegate;

@interface HandOffRecordFileUploadMgr : MMObject <ICdnComMgrExt, MMAppAttachFileMgrExt>

@property (retain, nonatomic) NSMutableArray *fileInfoQueue;
@property (retain, nonatomic) NSMutableArray *deletingItems;
@property (retain, nonatomic) CdnRecordMediaInfo *curTaskInfo;
@property (nonatomic) long long lastUploadProgressTime;
@property (weak, nonatomic) id<HandOffCDNUploadMgrDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)CheckQueue;
- (void)StartUpload:(id)a0;
- (void)StopCurUpload;
- (void)StopUpload:(id)a0;
- (void)startUploadAppAttach:(id)a0;
- (void)startUploadAppAttach:(id)a0 enableHitCheck:(BOOL)a1;
- (void)UploadFail;
- (void)UploadOk:(id)a0;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnUploadProgress:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void).cxx_destruct;

@end
