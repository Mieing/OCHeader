@class WCTDatabase, WCTTable;

@interface WCCardPkgDB : NSObject

@property (retain, nonatomic) WCTDatabase *m_db;
@property (retain, nonatomic) WCTTable *m_tableCardInfo;
@property (retain, nonatomic) WCTTable *m_tableMsgCenter;
@property (retain, nonatomic) WCTTable *m_tableOfflineCode;
@property (retain, nonatomic) WCTTable *m_tableOfflineCodeInfo;

- (BOOL)insertOrUpdateCodeConfigItem:(id)a0;
- (id)getQrCodeConfigByCardId:(id)a0;
- (BOOL)deleteAllCodeConfig;
- (BOOL)insertOrUpdateOfflineCodeItem:(id)a0;
- (id)getShowingQrcodeByCardId:(id)a0;
- (id)getQrCodeByCardId:(id)a0;
- (id)getUnShowQrCodesByCardId:(id)a0;
- (BOOL)updateCodeStatus:(id)a0;
- (BOOL)deleteCodeByQrCardIdAndCodeId:(id)a0 qrCodeId:(id)a1;
- (BOOL)deleteShowingCodeByCardId:(id)a0;
- (BOOL)deleteCodesByCardId:(id)a0;
- (unsigned int)getUnshowCodeCountByCardId:(id)a0;
- (unsigned int)getMessageCount;
- (unsigned int)getUnreadMessageCount;
- (id)getUnreadMsgList;
- (id)getFirstPageMsgList;
- (id)getNextPageMsgListByCurMinUpdateTime:(unsigned int)a0 HasSmaller:(BOOL *)a1;
- (BOOL)deleteWCCardMsgByLocalMsgID:(unsigned int)a0;
- (unsigned int)insertWCCardPkgMsg:(id)a0 XML:(id)a1;
- (id)getLastMsg;
- (BOOL)setAllMsgRead;
- (BOOL)cleanAllMsg;
- (BOOL)setConsumedMsgRead:(id)a0;
- (BOOL)insertOrUpdateWCCardByAddCardItem:(id)a0;
- (BOOL)insertOrUpdateWCCard:(id)a0;
- (BOOL)deleteWCCardByCardID:(id)a0;
- (BOOL)deleteWCCardByLocalCardID:(unsigned int)a0;
- (BOOL)getFirstPageWCCardList:(id)a0;
- (BOOL)getNextPageWCCardList:(id)a0 byCurMinUpdateTime:(unsigned int)a1;
- (BOOL)getFirstPageNeedBatchGetWCCardIdInfoList:(id)a0;
- (BOOL)getNextPageNeedBatchGetWCCardIdInfoList:(id)a0 byCurMinUpdateTime:(unsigned int)a1;
- (BOOL)getNeedBatchGetWCCardIdInfoList:(id)a0 byMinUpdateTime:(unsigned int)a1;
- (unsigned int)getWCCardCount;
- (unsigned int)getAvailableWCCardCount;
- (id)getAllAvailableCards;
- (unsigned int)getDynamicCardCount;
- (id)getDynamicCards;
- (id)getWCCardByCardID:(id)a0;
- (id)getAllWCCard;
- (void)updateStateFlagWithLoacalId:(id)a0;
- (void)reloadDataBase;
- (BOOL)initDB;
- (BOOL)runTransaction:(id /* block */)a0;
- (void)FixDatabaseBug;
- (void)CloseDB;
- (id)pathForDatabaseVersion;
- (unsigned int)getDatabaseVersion;
- (void)saveDatabaseVersion:(unsigned int)a0;
- (void)fixBugForStateFlagInCardInfoTable;
- (void).cxx_destruct;

@end
