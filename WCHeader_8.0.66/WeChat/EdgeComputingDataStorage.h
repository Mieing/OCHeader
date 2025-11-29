@interface EdgeComputingDataStorage : MMObject

- (BOOL)saveResult:(id)a0 withScriptConfigModel:(id)a1;
- (BOOL)deleteExpireData:(id)a0;
- (void)clearAllData:(id)a0;

@end
