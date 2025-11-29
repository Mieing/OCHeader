@interface BDXBridgeGetDeviceIdQueryStatsMethod : BDXBridgeMethod

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)__getIDFAStateWithDateLimit:(long long)a0;
- (id)__getIDFVStateWithDateLimit:(long long)a0;
- (id)__getContactsStateWithDateLimit:(long long)a0;
- (id)__fetchAPIStateWithName:(id)a0 value:(id)a1 dateLimit:(long long)a2 storageKey:(id)a3;
- (id)__maskPrivateString:(id)a0;
- (long long)__fetchQueryCountWithRecordList:(id)a0 dateLimit:(long long)a1;
- (BOOL)__checkDate:(id)a0 from:(id)a1 to:(id)a2;
- (id)methodName;

@end
