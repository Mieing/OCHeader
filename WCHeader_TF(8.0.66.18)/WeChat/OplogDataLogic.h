@class CMMDB, NSMutableArray, NSRecursiveLock;

@interface OplogDataLogic : NSObject {
    unsigned int m_oplogStartRowID;
    unsigned int m_oplogItemID;
    BOOL m_bDBEnd;
    NSMutableArray *m_arrOplogs;
    CMMDB *m_oMMDB;
    NSRecursiveLock *m_oLock;
}

@property BOOL m_bNeedContinue;

- (id)initWithDB:(id)a0 lock:(id)a1;
- (BOOL)InsertOplog:(unsigned int)a0 Oplog:(id)a1;
- (void)loadOplogData:(unsigned int)a0;
- (id)getFromDBOplog:(id)a0;
- (void)filterByMD5;
- (void)checkNeedContiue;
- (id)loadOplogFromDBlimit:(int)a0;
- (void)deleteOplog:(id)a0;
- (unsigned int)setFailOplog:(id)a0;
- (void).cxx_destruct;

@end
