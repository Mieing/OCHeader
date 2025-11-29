@class NSString, NSDictionary, MMSafeModeReport, NSMutableArray;

@interface MMSafeModeMgr : MMRootService <MMResourceMgrExt, WCUpdateMgrExt, IWCCrashReporterMgrExt, IWCDumpReporterMgrExt, MMServiceProtocol> {
    NSString *m_crashUsrName;
    unsigned long long m_crashUin;
    NSMutableArray *m_localUsrNameMd5List;
    NSDictionary *m_serverConfig;
    NSMutableArray *m_deleteListFromLocalConfig;
    NSMutableArray *m_uploadListFromLocalConfig;
    NSMutableArray *m_deleteListFromServerConfig;
    NSMutableArray *m_uploadListFromServerConfig;
    BOOL m_hasBackup;
    BOOL m_isUploadTimeout;
    unsigned long long m_safeModeScene;
    struct MMSafeModeInfo { int x0; int x1; int x2; int x3; long long x4; int x5; int x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; int x11; char *x12; } *m_safeModeInfo;
    MMSafeModeReport *m_safeModeReport;
    struct shared_ptr<MMSMUploadFileObserver> { struct MMSMUploadFileObserver *__ptr_; struct __shared_weak_count *__cntrl_; } m_observer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)dealloc;
- (void)initCrashUsrName;
- (BOOL)shouldEnterSafeMode;
- (unsigned long long)safeModeScene;
- (void)didEnterWeChat;
- (void)doSafeModeSceneIDKeyReport;
- (void)doReportAndUpdateConfig;
- (void)onReportAndUpdateConfigTimeout;
- (void)notifyReportAndUpdateConfigFinished;
- (void)clearUnnecessaryFiles;
- (id)currentUploadFiles;
- (long long)getUploadFilesSize;
- (void)uploadLogsAndSpecialFiles;
- (void)cancelUpload;
- (void)backupFilesInUploadList;
- (void)backupLogsFromConfigs;
- (void)clearAllFlags;
- (void)handleResignActiveNotification;
- (void)reportDataWithKey:(int)a0 value:(int)a1;
- (void)doCrashReport;
- (void)onCrashReporterUploadResult:(BOOL)a0;
- (void)onCrashReportFinished;
- (void)doLagReport;
- (void)onDumpReporterUploadResult:(BOOL)a0;
- (void)onLagReportFinished;
- (void)updateServerConfig;
- (void)updatePRConfig;
- (void)onPCUpdateFinish:(unsigned long long)a0;
- (void)updateSafeModeConfig;
- (void)onResUpdateFinish:(long long)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2;
- (void)setCrashUsrName:(id)a0;
- (BOOL)isServerConfigValid;
- (void)initDeleteAndUploadListFromLocalConfig;
- (void)initDeleteAndUploadListFromServerConfig;
- (id)deleteListFromConfigs;
- (void)forcedDeleteFilesFromServerConfig;
- (id)uploadListFromConfigs;
- (id)transformPath:(id)a0;
- (int)uploadLogsDaysFromConfigs;
- (id)rootPath;
- (id)documentsPath;
- (id)documentsUserPaths;
- (id)libraryPath;
- (id)libraryUserPaths;
- (id)uploadFileTempPath;
- (id)uploadFileZipName;
- (void)shieldFOOMEnterSafeMode;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
