@class MemoryMappedKV, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WCSiriMgr : MMUserService <MMServiceProtocol, MMKernelExt, PBMessageObserverDelegate, IContactMgrExt, INetworkStatusMgrExt> {
    NSObject<OS_dispatch_queue> *m_updateContactQueue;
}

@property (nonatomic) BOOL needRefreshSessionKey;
@property (nonatomic) BOOL isRefreshingSessionKey;
@property (nonatomic) BOOL isSirikitAvaiable;
@property (retain, nonatomic) MemoryMappedKV *mappedKV;
@property (retain, nonatomic) NSMutableArray *arrContactsToBeEncoded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getSiriDeviceId;

- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceTerminate;
- (void)onPreQuit;
- (BOOL)isSiriKitAvailable;
- (id)getQueue;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (void)onAuthOK;
- (void)getExtensionKeyForceRefresh;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleGetIosExtensionKeyResp:(id)a0 Event:(unsigned int)a1;
- (BOOL)isSessionKeyCached;
- (void)checkAndRefreshSessionKeyIfNeed;
- (void)updateApplicationContextIfCould;
- (void)portContactsDataToContainerFolderWithSession:(id)a0;
- (BOOL)shouldHandleContact:(id)a0;
- (id)convertContactToSiriIfNeed:(id)a0;
- (void)addVocabularyFor:(id)a0 toVocabularys:(id)a1;
- (BOOL)IsEnChar:(unsigned short)a0;
- (id)vocabularyFromContactName:(id)a0;
- (void)onContactListUpdate:(unsigned int)a0;
- (void)onNewContact:(id)a0;
- (void)onDeleteContact:(id)a0;
- (void)onModifyContact:(id)a0;
- (void)checkEncodeContacts:(BOOL)a0;
- (void)updateVocabulary:(id)a0;
- (void).cxx_destruct;

@end
