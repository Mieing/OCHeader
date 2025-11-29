@interface BDSetBcmParamsMethodImpl : BDSetBcmParamsMethod

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateParamForKey:(id)a0 value:(id)a1 updateType:(unsigned long long)a2 paramType:(unsigned long long)a3 page:(id)a4;
- (unsigned long long)paramTypeEnumWithParamType:(id)a0;
- (unsigned long long)updateTypeEnumWithUpdateType:(id)a0;

@end
