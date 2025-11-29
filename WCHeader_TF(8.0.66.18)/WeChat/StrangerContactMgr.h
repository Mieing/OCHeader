@class StrangerContactHeadImageData, NSString, NSMutableDictionary, NSMutableArray;

@interface StrangerContactMgr : MMUserService <IContactMgrExt, IBrandAttrMgrExt, MMServiceProtocol, PBMessageObserverDelegate> {
    BOOL m_bMemCacheNeedReload;
    NSMutableDictionary *m_dicContacts;
    NSMutableDictionary *m_dicLastAccessTime;
    NSMutableDictionary *m_lastUpdateTime;
    NSMutableArray *m_arrQueue;
    NSMutableDictionary *m_dicGetingContacts;
    NSMutableDictionary *m_dicContactScene;
    NSMutableArray *m_arrUploading;
    unsigned int m_uiCurEventID;
    StrangerContactHeadImageData *m_headImageInfoData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)p_getStrangerContactHeadImageDataFilePath;
- (void)saveStrangerContactHeadImageToDataFileInternal;
- (void)loadStrangerContactHeadImageInternal;
- (void)recordDownloadSuccessHeadImageUrl:(id)a0 url:(id)a1;
- (id)getDownloadSuccessHeadImageUrl:(id)a0;
- (id)pathForOldData;
- (id)pathForData;
- (id)pathForOldTimeData;
- (id)pathForTimeData;
- (void)tryLoadData;
- (void)ReduceCache;
- (void)saveData;
- (void)clearMemoryCache;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (BOOL)IsInQueue:(id)a0;
- (void)SetAccessTime:(id)a0;
- (id)getContactByName:(id)a0;
- (void)addContact:(id)a0;
- (void)updateContact:(id)a0 withScene:(unsigned int)a1;
- (void)updateContactFromContact:(id)a0 withScene:(unsigned int)a1;
- (id)GetUsrArray;
- (id)p_GetUsrArray;
- (void)CheckQueue;
- (BOOL)checkIfForbiddenGetContact:(id)a0;
- (double)updateLimitDuration;
- (BOOL)InternalUpdateContact:(id)a0;
- (void)handleNewContact:(id)a0;
- (BOOL)hasBrandIconUrlChange:(id)a0 andModContact:(id)a1;
- (BOOL)isBrandModContact:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onDeleteContact:(id)a0;
- (void)onBrandContactModified:(id)a0 withAttrChanged:(id)a1;
- (void).cxx_destruct;

@end
