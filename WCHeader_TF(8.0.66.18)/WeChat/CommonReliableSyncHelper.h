@interface CommonReliableSyncHelper : NSObject

- (BOOL)checkIsNeedRespContinue:(id)a0;
- (BOOL)checkNeedAutoauthSyncActionWithCommBizIdBit:(id)a0;
- (id)getSelectorWithSyncAction:(id)a0;
- (void)replaceSelectorInSyncAction:(id)a0 arrNewSelector:(id)a1;
- (id)syncKeyBuffInStorageWithcommBizIdBit:(unsigned int)a0;
- (void)setSyncKey:(id)a0 commBizIdBit:(unsigned int)a1 oSyncKeyBuff:(id)a2;
- (id)mergeBufferInfo:(id)a0 fileBufferInfo:(id)a1;
- (id)getSyncBuffFilePathWithCommBizIdBit:(unsigned int)a0;
- (id)getMMKVIdWithCommBizIdBit:(unsigned int)a0;

@end
