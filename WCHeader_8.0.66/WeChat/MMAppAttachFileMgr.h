@class NSString, NSMutableDictionary;

@interface MMAppAttachFileMgr : MMUserService <ICdnComMgrExt, PBMessageObserverDelegate, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *msgWrapDict;
@property (retain, nonatomic) NSMutableDictionary *msgAttachUrlDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportFileMsg:(id)a0 action:(int)a1;
+ (void)reportSendFileAction:(id)a0 action:(int)a1;

- (void)dealloc;
- (id)init;
- (BOOL)isFileMessageAndLargerThanSize:(id)a0 size:(unsigned long long)a1;
- (BOOL)isLargeFileMessage:(id)a0;
- (void)checkIfFileExistInSvr:(id)a0;
- (void)checkUpload:(id)a0 scene:(unsigned int)a1;
- (void)batchCheckUploadDataList:(id)a0 inMsg:(id)a1;
- (void)calcMessageWrapFileMd5:(id)a0 scene:(unsigned int)a1 filePath:(id)a2;
- (void)checkUploadInternal:(id)a0 scene:(unsigned int)a1;
- (void)OnCdnUpload:(id)a0;
- (void)onGetCheckBigFileUploadRespnse:(id)a0 eventID:(unsigned int)a1;
- (void)onBatchCheckBigFileUploadRespnse:(id)a0 eventID:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
