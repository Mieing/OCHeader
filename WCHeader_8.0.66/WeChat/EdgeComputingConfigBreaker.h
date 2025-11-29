@class NSMutableDictionary;

@interface EdgeComputingConfigBreaker : MMObject {
    NSMutableDictionary *scriptConfigRecorder;
    NSMutableDictionary *sqlConfigRecorder;
    NSMutableDictionary *scriptConfigRecorderBackup;
    NSMutableDictionary *sqlConfigRecorderBackup;
}

- (id)init;
- (void)recordScriptConfig:(id)a0;
- (void)removeScriptConfig:(id)a0;
- (BOOL)isErrorScriptConfig:(id)a0;
- (void)recordSqlConfig:(id)a0;
- (void)removeSqlConfig:(id)a0;
- (void)initRecorder;
- (void)saveRecorder;
- (void).cxx_destruct;

@end
