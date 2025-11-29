@class NSString, WCTDatabase, WXGBackupRecoverAnalyseInfo, WXGImportAnalyseInfo, BackupAnalyseInfo;

@interface WXGBackupAnalyseService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WCTDatabase *infoDB;
@property (retain, nonatomic) BackupAnalyseInfo *finishInfo;
@property (retain, nonatomic) WXGBackupRecoverAnalyseInfo *recoverInfo;
@property (retain, nonatomic) WXGImportAnalyseInfo *importInfo;
@property (nonatomic) BOOL hasPause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)briefForAnalyseInfo:(id)a0;

- (id)init;
- (void)insertAnalyseInfo:(id)a0 type:(unsigned long long)a1;
- (void)insertRecoverInfo:(id)a0 type:(unsigned long long)a1;
- (void)insertImportInfo:(id)a0 type:(unsigned long long)a1;
- (void)insertBackupMgrInfo:(id)a0 type:(unsigned long long)a1;
- (id)getLastFiveInfoString;
- (void)setHasPauseWhenTransfer;
- (void)reportDataReconciliation;
- (void).cxx_destruct;

@end
