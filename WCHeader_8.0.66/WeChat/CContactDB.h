@class CMMDB;

@interface CContactDB : NSObject {
    CMMDB *m_oMMDB;
}

- (id)init;
- (void)initDB:(id)a0;
- (id)getContact:(id)a0;
- (BOOL)loadContactExtInfo:(id)a0;
- (void)getFriendAndExtTableValue:(id)a0 fromDBContact:(id)a1 DBContactExt:(id)a2;
- (unsigned int)getContactCount;
- (BOOL)getContactList:(id)a0 listType:(unsigned int)a1 limit:(int)a2;
- (BOOL)getAllContactList:(id)a0 listType:(unsigned int)a1;
- (BOOL)getAllContactNoExtInfoList:(id)a0 listType:(unsigned int)a1;
- (BOOL)getAllUserName:(id)a0;
- (BOOL)getAllRemarkList:(id)a0 listType:(unsigned int)a1;
- (BOOL)deleteContact:(id)a0;
- (BOOL)deleteContacts:(id)a0;
- (unsigned int)GetLastUpdateTimeOfUser:(id)a0;
- (unsigned int)GetFriendMetaFlag:(id)a0;
- (void)getFriendTableValue:(id)a0 fromDBObject:(id)a1;
- (void)getFriendExtTableValue:(id)a0 fromDBObject:(id)a1;
- (BOOL)isFriendExtTableExist:(id)a0;
- (void)getContactQueryProperty:(void *)a0;
- (void).cxx_destruct;

@end
