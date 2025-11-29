@class NSMutableDictionary, NSString, NSMutableArray, CdnTaskInfo;
@protocol HandOffCDNUploadMgrDelegate;

@interface HandOffMsgFileUploadMgr : MMObject <ICdnComMgrExt, MMAppAttachFileMgrExt, PBMessageObserverDelegate>

@property (retain, nonatomic) NSMutableArray *fileInfoQueue;
@property (retain, nonatomic) NSMutableArray *deletingItems;
@property (retain, nonatomic) CdnTaskInfo *curTaskInfo;
@property (retain, nonatomic) NSMutableDictionary *msgInfoDict;
@property (retain, nonatomic) NSMutableDictionary *bigFileUploadRespDict;
@property (nonatomic) long long lastUploadProgressTime;
@property (copy, nonatomic) NSString *aesKey;
@property (copy, nonatomic) NSString *fileId;
@property (nonatomic) BOOL enableHitCheck;
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
- (void)checkBigFileUpload:(id)a0 scene:(unsigned int)a1;
- (void)onCheckBigFileUploadResult:(BOOL)a0 resp:(id)a1 wrapMsg:(id)a2 errMsg:(id)a3;
- (void)startUploadAppAttach:(id)a0;
- (void)startUploadAppAttach:(id)a0 enableHitCheck:(BOOL)a1;
- (void)UploadFail;
- (void)UploadOk:(id)a0;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnUploadProgress:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void)checkMd5:(id)a0;
- (void)uploadSuccess;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (BOOL)isOpenHitCache;
- (void).cxx_destruct;

@end
