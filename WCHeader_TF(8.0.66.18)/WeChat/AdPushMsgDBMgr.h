@class WCTDatabase, WCTTable;

@interface AdPushMsgDBMgr : NSObject

@property (retain, nonatomic) WCTDatabase *db;
@property (retain, nonatomic) WCTTable *pushMsgTable;

+ (id)MagicPushMsgDBPath;

- (id)init;
- (void)initDB;
- (id)setupTableWithName:(id)a0 tableClass:(Class)a1;
- (id)getSpecificSlotMsg:(id)a0;
- (BOOL)clearSpecificSlotMsg:(id)a0;
- (void)insertNewPushMsg:(id)a0;
- (void)clearOverTimeMsg;
- (void)dealloc;
- (void).cxx_destruct;

@end
