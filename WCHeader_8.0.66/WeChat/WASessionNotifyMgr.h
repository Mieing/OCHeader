@class NSString, WASessionNotifyInfo;

@interface WASessionNotifyMgr : MMUserService <PBMessageObserverDelegate, MMKernelExt, MMServiceProtocol> {
    WASessionNotifyInfo *_notifyInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadNotifyInfoFromFile;
+ (void)saveToNotifyInfoToFile:(id)a0;

- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getGlobalSessionNotifyOpenStatus;
- (id)getSessionNotifyCloseList;
- (void)requestSessionNotifyInfo;
- (void)setGlobalSessionNotifyOpenStatus:(id)a0 openUserNameList:(id)a1;
- (void)setSessionNotifyOpen:(id)a0;
- (void)setSessionNotifyClose:(id)a0;
- (void)callExtensionOnSessionNotifyUpdate;
- (void)requestGlobalSessionNotifyOpenStatus;
- (void)requestSessionNotifyWithType:(unsigned int)a0;
- (void)onResponseSessionNotify:(id)a0 withRequest:(id)a1;
- (void)requestSwitchSessionNotifyWithGlobalOpenStatus:(id)a0 closeUserNameList:(id)a1 openUserNameList:(id)a2;
- (void)onResponseSwitchSessionNotify:(id)a0 withRequest:(id)a1;
- (void)saveNotifyOptionToMemoryAndFile:(id)a0 withRequest:(id)a1;
- (id)generateNotifyOptionItemListAndSyncToMemory:(id)a0 closeUserNameList:(id)a1 openUserNameList:(id)a2;
- (void)syncSwitchRequestChangeToFile:(id)a0;
- (void)rollbackSwitchRequestChangeFromFileToMemory:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onManulLoginOK;
- (void)updateSessionHolderNotify:(id)a0;
- (void)updateSessionNotifyToClose:(id)a0;
- (void)updateSessionNotifyToOpen:(id)a0;
- (void)updateSessionNotifyIsOpen:(BOOL)a0 userNameList:(id)a1;
- (void).cxx_destruct;

@end
