@class NSString, NSMapTable;

@interface MagicBrushKVStorageFactory : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMapTable *mMBKVMap;
@property (retain, nonatomic) NSMapTable *mPublicServiceOtherBizStorageMap;
@property (retain, nonatomic) NSString *uin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (id)getOrCreateBizStorage:(id)a0 otherBizName:(id)a1;
- (id)privateGetOrCreateBizStorage:(id)a0 uin:(id)a1;
- (long long)getBizStorageSize:(id)a0;
- (long long)getBizStorageQuota:(id)a0;
- (void)clearBizStorage;
- (void)addPublicServiceOtherBizStorage:(id)a0 bizNameList:(id)a1;
- (id)getPublicServiceOtherBizStorageList:(id)a0;
- (void).cxx_destruct;

@end
