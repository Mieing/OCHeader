@class WCTDatabase, NSMutableDictionary, WCTTable;

@interface WCFinderMsgSessionStatusStorage : NSObject

@property (retain, nonatomic) WCTDatabase *sessionStatusDB;
@property (retain, nonatomic) WCTTable *sessionStatusTable;
@property (retain, nonatomic) NSMutableDictionary *sessionStatusDic;
@property (copy, nonatomic) id /* block */ recoverBlock;

- (void)dealloc;
- (id)init;
- (void)initDBAndSetRecoverBlock:(id /* block */)a0;
- (void)addDBRecoverObserver;
- (void)loadDB;
- (void)updateLocalSessionStatusSelfUsername:(id)a0 myAccountType:(unsigned int)a1;
- (void)clearSessionStatusCache;
- (unsigned long long)sessionStatusListCount;
- (void)addOrUpdateSessionStatus:(id)a0;
- (id)sessionStatusWithSessionId:(id)a0;
- (id)sessionStatusListWithMyAccountType:(unsigned int)a0 isInNormalSession:(BOOL)a1;
- (id)sessionStatusListWithFinderUsername:(id)a0 isInNormalSession:(BOOL)a1;
- (void)removeAllSesstionStatusWithAccountType:(unsigned int)a0;
- (void)removeAllSesstionStatusWithFinderUsername:(id)a0;
- (BOOL)isDBNeedRecover;
- (void)setDBIsNeedRecover:(BOOL)a0;
- (void)willRecoverDatabase;
- (void)didRecoverDatabase;
- (void).cxx_destruct;

@end
