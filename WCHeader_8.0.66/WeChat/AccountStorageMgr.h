@class NSRecursiveLock, CUpdateInfo, NSString, CSetting, SyncBufferInfo, CSettingExt;

@interface AccountStorageMgr : MMUserService <MMServiceProtocol> {
    NSRecursiveLock *m_oLock;
    SyncBufferInfo *m_oSyncBufferInfo;
    NSString *m_nsDocPath;
    BOOL m_testMemoryInvalid;
    BOOL m_testPhysicalInvalid;
    BOOL m_testSettingInvalid;
}

@property (readonly, nonatomic) CSetting *m_oSetting;
@property (copy, nonatomic) CSettingExt *m_oSettingExt;
@property (copy, nonatomic) CUpdateInfo *m_oUpdateInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)closeResource;
- (void)dealloc;
- (void)ResetMemorySyncBuffer;
- (BOOL)ValidForPhysicalSyncBuffer;
- (BOOL)ValidForMemorySyncBuffer;
- (BOOL)ValidForSettingInfo;
- (void)LoadSetting;
- (void)DirectSaveSetting;
- (void)MainThreadSaveSetting;
- (void)LoadSettingExt;
- (void)SaveSettingExt;
- (void)LoadUpdateInfo;
- (void)SaveUpdateInfo;
- (id)GetUpdateInfo;
- (BOOL)MergeAndSaveSyncBuffer:(id)a0;
- (BOOL)SaveSyncBuffer:(id)a0;
- (id)GetSyncBuffer;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)clearSyncBuffer;
- (id)syncBufferMMKV;
- (id)loadSvrSyncBufferKey;
- (BOOL)saveSvrSyncBufferKey:(id)a0;
- (BOOL)internalWriteSyncBuffer:(id)a0;
- (id)internalReadSyncBuffer;
- (void)internalRemoveSyncBuffer;
- (void).cxx_destruct;

@end
