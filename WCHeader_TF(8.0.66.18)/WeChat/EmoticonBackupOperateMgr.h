@class NSString, EmoticonOperateCgi, OrderedDictionary, NSMutableDictionary, EmoticonUploader, NSMutableArray, EmoticonUploadCgi, EmoticonCameraReportObject;

@interface EmoticonBackupOperateMgr : MMUserService <EmoticonUploadCgiDelegate, EmoticonUploaderDelegate, MMServiceProtocol>

@property (retain, nonatomic) EmoticonOperateCgi *m_operateCgi;
@property (retain, nonatomic) EmoticonUploadCgi *m_uploadCgi;
@property (retain, nonatomic) EmoticonUploader *m_uploader;
@property (retain, nonatomic) NSMutableArray *m_addEmoticonWraps;
@property (retain, nonatomic) NSMutableDictionary *m_addSuccessWraps;
@property (retain, nonatomic) NSMutableArray *m_addFailWraps;
@property (retain, nonatomic) OrderedDictionary *m_uploadEmoticonQueue;
@property (nonatomic) BOOL inStickyOperate;
@property (retain, nonatomic) EmoticonCameraReportObject *m_reportObject;
@property (retain, nonatomic) NSString *operationKey;
@property (readonly, nonatomic) BOOL hasAddBackupSuccessAfterInit;
@property (readonly, nonatomic) BOOL isLastSuccessAddEmoticonCustom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportAddBackupEmoticon:(id)a0 failedWithReason:(unsigned long long)a1;

- (id)init;
- (void)deleteBackupEmoticonFromServer:(id)a0 withType:(unsigned long long)a1;
- (void)deleteBackupEmoticonOperateOk:(id)a0 withType:(unsigned long long)a1;
- (void)deleteBackupEmoticonOperateFailed:(id)a0;
- (void)stickyBackupEmoticonToServer:(id)a0 withType:(unsigned long long)a1 fromAdd:(BOOL)a2;
- (void)stickyBackupEmoticonToServer:(id)a0 withType:(unsigned long long)a1 needDealVc:(BOOL)a2 fromAdd:(BOOL)a3;
- (void)preCheckGameEmoticonForSticky:(id)a0 gameMd5:(id)a1;
- (void)stickyBackupEmoticonOperateOk:(id)a0 withType:(unsigned long long)a1 needDealVc:(BOOL)a2;
- (void)stickyBackupEmoticonOperateFailed:(id)a0 needDealVc:(BOOL)a1;
- (void)moveBackupEmoticonToServer:(id)a0 withType:(unsigned long long)a1 insertPositionMd5:(id)a2;
- (void)moveBackupEmoticonOperateOk:(id)a0 withType:(unsigned long long)a1 insertPositionMd5:(id)a2;
- (void)moveBackupEmoticonOperateFailed:(id)a0;
- (void)addBackupEmoticonToServer:(id)a0 totalAddCount:(unsigned long long)a1;
- (void)uploadEmoticon:(id)a0;
- (void)checkUploadEmoticon;
- (void)uploadEmoticonFailed:(id)a0 withReason:(unsigned long long)a1 realMd5:(id)a2;
- (void)uploadEmoticonOk:(id)a0 withEmojiInfo:(id)a1;
- (void)addBackupEmoticon:(id)a0 failedWithReason:(unsigned long long)a1 errMsg:(id)a2;
- (void)addBackupEmoticonOkWithAddEmoticonWrap:(id)a0 validEmojiInfoObj:(id)a1;
- (void)addBackupEmoticonOkAndSaveToFile:(id)a0 isEmojiInfoValid:(BOOL)a1;
- (void)precessAddBackupEmoticonResults;
- (void)trySaveThumbImageForAddEmoticonWrap:(id)a0;
- (id)decodeEmoticonUploadQueueFromFile:(id)a0;
- (BOOL)encodeEmoticonUploadQueue:(id)a0 toFile:(id)a1;
- (id)addEmoticonWrapForUploadMd5:(id)a0;
- (id)allAddEmoticonWrapInUploadQueue;
- (BOOL)removeAddEmoticonWrapFromUploadQueueForUploadMd5:(id)a0;
- (unsigned long long)countOfAddEmoticonWrapsPendingUpload;
- (void)onEmoticonUploadMd5Ok:(id)a0 emojiInfo:(id)a1;
- (void)onEmoticonUploadMd5Failed:(id)a0 reason:(unsigned long long)a1;
- (void)onEmoticonUploadSuccessWithEmoji:(id)a0 uploadInfo:(id)a1;
- (void)onEmoticonUploadFailWithUploadInfo:(id)a0 reason:(unsigned long long)a1 realMd5:(id)a2;
- (id)getCurrentOperationKey;
- (BOOL)startNewOperaton;
- (void)endNewOperaton;
- (void).cxx_destruct;

@end
