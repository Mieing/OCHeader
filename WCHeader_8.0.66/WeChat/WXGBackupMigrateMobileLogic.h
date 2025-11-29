@class WXGBackupRecoverHelper, NSMutableDictionary, NSString, NSData, NSObject, WXGBackupImportMessageHelper;
@protocol OS_dispatch_group;

@interface WXGBackupMigrateMobileLogic : WXGBackupBasicLogic <WXGBackupRecoverHelperDelegate, WXGBackupImportMessageHelperDelegate, WXGBackupBasicLogicProtocol>

@property (retain, nonatomic) WXGBackupRecoverHelper *recoverHelper;
@property (retain, nonatomic) WXGBackupImportMessageHelper *importHelper;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *writeGroup;
@property (retain, nonatomic) NSData *finishData;
@property (retain, nonatomic) NSMutableDictionary *filterSizeDic;
@property (nonatomic) unsigned long long backFilterSizes;
@property (nonatomic) BOOL bStopService;
@property (nonatomic) unsigned long long currentSessionCount;
@property (nonatomic) unsigned long long totalSessionCount;
@property (nonatomic) BOOL bFirstTag;
@property (copy, nonatomic) NSString *lastSessionName;
@property (nonatomic) BOOL bProcessFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startService;
- (void)stopService;
- (void)confirmLogic;
- (BOOL)sendData:(id)a0;
- (void)sendMigratePCConfirm;
- (void)sendStartResponseWithStatus:(int)a0;
- (void)sendRequestSessionResponseWithDataInfoArray:(id)a0;
- (void)sendDataPushResponse:(id)a0;
- (void)sendDataTagResponseForDataTag:(id)a0;
- (void)sendFilterResponse:(id)a0;
- (void)processStartRequestData:(id)a0;
- (void)processRequestSessionData:(id)a0;
- (void)processDataPushData:(id)a0;
- (void)processBackupDataTagData:(id)a0;
- (void)processFilterRequestData:(id)a0;
- (void)processFinishRequestData:(id)a0;
- (void)onData:(id)a0 writeToFileFinish:(BOOL)a1;
- (void)onDataTagProcessEnd:(id)a0;
- (void)onRequestSessionProcessEndWithResponse:(id)a0;
- (void)onFilterRequestEnd:(id)a0 filterSize:(unsigned long long)a1;
- (BOOL)onPhoneDiskNotEnouge;
- (void)onLastImportFinished;
- (void)onBackupImportMessageFinish;
- (void)onBackupImportMessageError;
- (void)onBackupImportMessagePrepareFinish;
- (void)reportDisconnect:(unsigned long long)a0;
- (void).cxx_destruct;

@end
