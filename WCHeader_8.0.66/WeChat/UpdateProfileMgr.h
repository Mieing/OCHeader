@class NSString, NSRecursiveLock;

@interface UpdateProfileMgr : MMUserService <INewSyncExt, MMServiceProtocol, MMKernelExt, PBMessageObserverDelegate, IContactMgrExt> {
    NSRecursiveLock *m_lock;
    long long m_profileUpdateEvent;
}

@property (nonatomic) BOOL isShowingElderModeAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasSetWxPasswd;
+ (BOOL)isUserInfoNotReady;
+ (id)getOplog:(id)a0;
+ (void)modifySetting:(id)a0;
+ (void)modifySetting:(id)a0 callExt:(BOOL)a1;
+ (BOOL)modifyUserInfo:(id)a0;

- (void)onServiceInit;
- (id)init;
- (void)dealloc;
- (void)handleModUserInfo:(id)a0 withSetting:(id)a1;
- (void)modifyPatSuffix:(id)a0;
- (void)modifyTextStateId:(id)a0 extInfo:(id)a1;
- (void)modifyVideoRing:(id)a0;
- (void)updateVoipRecentStatusSwitch:(BOOL)a0;
- (void)updateSavedHelloMsg:(id)a0 businessCardItem:(id)a1;
- (void)handleGetUserInfoExt:(id)a0;
- (void)updateRegCountry:(id)a0;
- (void)handleTranslateAllChange:(unsigned long long)a0;
- (void)handleElderModeChange:(unsigned long long)a0 newExtStatus:(unsigned long long)a1 oldExtStatus2:(unsigned long long)a2 newExtStatus2:(unsigned long long)a3 oldHearingAidMode:(unsigned long long)a4 newHearingAidMode:(unsigned long long)a5;
- (void)HandleModUsrInfo:(id)a0;
- (void)HandleModUsrInfoExt:(id)a0;
- (void)commonHandleModUserInfoExt:(id)a0;
- (void)checkAndTransferCallKitSwitch;
- (void)updateUserProfile;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onNewSyncModUserInfo:(id)a0;
- (void)onNewSyncModUserInfoExt:(id)a0;
- (void)callOnProfileChange;
- (void)setIsNeedUpdateAfterAuth:(BOOL)a0;
- (void)onAuthOK;
- (void)onModifySelfContact:(id)a0;
- (void).cxx_destruct;

@end
