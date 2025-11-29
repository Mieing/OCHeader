@class NSMutableDictionary;

@interface EdgeComputingRunRecord : MMObject {
    NSMutableDictionary *runRecords;
}

- (id)init;
- (void)initRecord;
- (void)saveRecord;
- (void)addRecord:(id)a0 withTime:(unsigned long long)a1;
- (void)removeRecord:(id)a0;
- (unsigned long long)getLastRecord:(id)a0;
- (void).cxx_destruct;

@end
