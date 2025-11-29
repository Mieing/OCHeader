@class WCTDatabase, WCTTable;

@interface GroupNoticeDB : NSObject

@property (retain, nonatomic) WCTDatabase *database;
@property (retain, nonatomic) WCTTable *table;
@property (retain, nonatomic) WCTTable *revokeMsgTable;

- (id)init;
- (id)createTable:(Class)a0;
- (void)addRelationWithSourceId:(id)a0 msgLocalId:(unsigned int)a1 userName:(id)a2;
- (unsigned int)getMsgLocalIdWithSourceId:(id)a0;
- (void)removeRelationWithSourceId:(id)a0;
- (void)removeRelationWithUserName:(id)a0;
- (id)getRevokeMsgByAnnouncementId:(id)a0;
- (id)getRevokeMsgBySourceId:(id)a0;
- (BOOL)insertRevokeMessage:(id)a0;
- (BOOL)removeOldRevokeMessagesBefore:(unsigned int)a0;
- (id)getDBPath;
- (void).cxx_destruct;

@end
