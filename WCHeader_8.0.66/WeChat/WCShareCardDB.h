@class WCTDatabase, WCTTable;

@interface WCShareCardDB : MMObject

@property (retain, nonatomic) WCTDatabase *m_db;
@property (retain, nonatomic) WCTTable *m_tableShareCardInfo;

- (unsigned int)getShareCardCount;
- (unsigned int)getShareCardAvailableCount;
- (BOOL)getFirstPageNeedBatchGetWCShareCardIdList:(id)a0;
- (BOOL)getNeedBatchGetWCShareCardIdList:(id)a0 byMinUpdateTime:(unsigned int)a1;
- (unsigned int)getValidShareCardCountByTpId:(id)a0;
- (BOOL)insertOrUpdateShareCardBySyncItem:(id)a0;
- (BOOL)insertOrUpdateShareCardData:(id)a0;
- (BOOL)deleteWCShareCardByCardID:(id)a0;
- (void)deleteUselessShareCard;
- (unsigned int)getNoramlShareCardCount:(id)a0;
- (id)getWCShareCardByCardID:(id)a0;
- (BOOL)getWCShareCardByCardTPID:(id)a0 andShareCardList:(id)a1;
- (BOOL)initDB;
- (BOOL)runTransaction:(id /* block */)a0;
- (void).cxx_destruct;

@end
