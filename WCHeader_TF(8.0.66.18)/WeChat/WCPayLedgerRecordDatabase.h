@interface WCPayLedgerRecordDatabase : NSObject {
    void /* unknown type, empty encoding */ database;
    void /* unknown type, empty encoding */ table;
}

@property (class, nonatomic, readonly) WCPayLedgerRecordDatabase *instance;

- (id)init;
- (void)deleteWithId:(id)a0;
- (void)deleteWithTalker:(id)a0 localId:(long long)a1;
- (void)deleteWithTalker:(id)a0;
- (void)updateRecordWithTransactionId:(id)a0 amount:(long long)a1 timestamp:(unsigned int)a2;
- (void)removeAllRecords;
- (void).cxx_destruct;

@end
