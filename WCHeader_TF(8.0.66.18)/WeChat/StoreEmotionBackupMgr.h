@class NSString, StoreEmotionBackupLogicObject;

@interface StoreEmotionBackupMgr : MMUserService <MMKernelExt, StoreEmotionBackupLogicObjectDelegate, MMServiceProtocol>

@property (retain, nonatomic) StoreEmotionBackupLogicObject *backupLogicObject;
@property (nonatomic) int scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)backupStoreEmotionToServerFromScene:(int)a0;
- (void)backupStoreEmotionToServerFromScene:(int)a0 needCheckFileExist:(BOOL)a1;
- (BOOL)hasCheckFileExist;
- (BOOL)canStartCgiNow;
- (void)onAuthOK;
- (void)onPreQuit;
- (void)onStoreEmotionBackupLogicOK;
- (void)onStoreEmotionBackupLogicFailed;
- (void)onStoreEmotionBackupLogicNoneedBackup;
- (void).cxx_destruct;

@end
