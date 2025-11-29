@class WCDevicedebugSettingData, NSString, NSRecursiveLock, NSMutableDictionary, NSMutableArray;

@interface WCDeviceDebugMgr : MMUserService <MMServiceProtocol> {
    NSMutableArray *m_logs;
    NSMutableArray *m_contacts;
    WCDevicedebugSettingData *m_settingData;
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_userIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)onServiceMemoryWarning;
- (id)getAllLogUser;
- (BOOL)hasCanLogUser;
- (BOOL)isUserOpenLog:(id)a0;
- (void)addDebugLog:(id)a0 forDid:(long long)a1;
- (void)addErrorLog:(id)a0 forDid:(long long)a1;
- (void)addDebugLog:(id)a0 forDevice:(id)a1;
- (void)addErrorLog:(id)a0 forDevice:(id)a1;
- (void)addTips:(id)a0;
- (void)addInfo:(id)a0;
- (id)getLogsFrom:(int)a0 Limit:(int)a1;
- (void)setLastIndex:(long long)a0 forUser:(id)a1;
- (long long)getLastIndexForUser:(id)a0;
- (void)cleanAllLogs;
- (BOOL)checkPremissionIsOk:(id)a0;
- (void)addLog:(id)a0 isError:(BOOL)a1 forDid:(long long)a2;
- (void)addLog:(id)a0 isError:(BOOL)a1 forDevice:(id)a2;
- (void)addObjecttoLogs:(id)a0;
- (id)getSettingPath;
- (void)reloadContacts;
- (void).cxx_destruct;

@end
