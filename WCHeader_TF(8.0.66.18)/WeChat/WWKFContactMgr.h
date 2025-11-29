@class MemoryMappedKV, NSMutableDictionary, NSString, WCTDatabase, WCTTable;

@interface WWKFContactMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *userName2ContactMap;
@property (retain, nonatomic) NSMutableDictionary *appId2ContactsMap;
@property (retain, nonatomic) MemoryMappedKV *slotKv;
@property (retain, nonatomic) WCTDatabase *db;
@property (retain, nonatomic) WCTTable *tableContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wwkfKeyUrlForKfUrl:(id)a0;

- (void)callDeallocInCatagoryDataBase;
- (void)openDB;
- (void)setupTable;
- (void)closeDB;
- (id)setupTableWithName:(id)a0 tableClass:(Class)a1;
- (void)willRecoverDatabase;
- (void)didRecoverDatabase;
- (void)registerRecoverNotification;
- (void)unregisterRecoverNotification;
- (id)wwkfContactDBWillRecoverNotificationName;
- (id)db_getAllContacts;
- (id)db_getContactWithUserName:(id)a0;
- (id)db_getContactWithAppId:(id)a0;
- (BOOL)db_insertOrUpdateContact:(id)a0;
- (BOOL)db_deleteContactWithUserName:(id)a0;
- (BOOL)db_modifyHeadImageStatus:(id)a0 withUserName:(id)a1;
- (id)wwkfContactWithDBContact:(id)a0;
- (id)dbContactWithWWKFContact:(id)a0;
- (id)pathOfWeWorkKFDB;
- (id)getCContactWithWWKFUserName:(id)a0;
- (id)getAllCContactOfWWKF;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (id)getContactWithUserName:(id)a0;
- (id)getContactsWithAppId:(id)a0;
- (id)getAllWWKFContacts;
- (id)__getContactFromCacheWithUserName:(id)a0;
- (id)__getContactsFromCachetWithAppId:(id)a0;
- (void)setContactToLocal:(id)a0;
- (BOOL)updateContactToDBAndCache:(id)a0;
- (BOOL)modifyHeadImageStatus:(id)a0 withUserName:(id)a1;
- (BOOL)deleteContactFromDBAndCache:(id)a0;
- (BOOL)setWWKFContact:(id)a0 typeBit:(unsigned int)a1 set:(BOOL)a2 localSet:(BOOL)a3;
- (unsigned int)addOplogWithWWKFContact:(id)a0 mute:(BOOL)a1;
- (unsigned int)addOplogType:(unsigned int)a0 Buffer:(id)a1;
- (void)tryDeleteInvalidWWKFContacts;
- (void)mainThread_updateContactCacheAndCallModifyContactWithContact:(id)a0;
- (void)mainThread_updateContactCacheAndCallModifyContact:(id)a0;
- (void)mainThread_deleteContactCacheAndCallModifyContactWithContact:(id)a0;
- (void)mainThread_callModifyContactHeadURLWithContact:(id)a0;
- (void)openSlotKV;
- (id)cacheContactUserNameForKFUrl:(id)a0;
- (BOOL)setCacheContactUserName:(id)a0 foKFUrl:(id)a1;
- (unsigned int)lastDeleteInvalidContactTimeStamp;
- (void)updateLastDeleteInvalidContactTimeStamp;
- (unsigned int)deleteInvalidContactDefautltInterval;
- (void).cxx_destruct;

@end
