@class MemoryMappedKV, NSString, NSRecursiveLock;

@interface MPPageUrlInfoMgr : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) MemoryMappedKV *slotMMKV;
@property (retain, nonatomic) NSRecursiveLock *dataLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseMPPageIdentityWithMPPageFullUrl:(id)a0;
+ (id)identityWithBizStr:(id)a0 midStr:(id)a1 indexStr:(id)a2;
+ (id)MPPageCommonIdentityWithUrl:(id)a0;
+ (id)MPPageCommonIdentityWithUrl:(id)a0 itemShowType:(unsigned int)a1;
+ (id)MPPageCommonIdentityWithbizId:(id)a0 msgId:(id)a1 itemIdx:(id)a2 itemShowType:(unsigned int)a3;

- (id)init;
- (void)prepareSlotKv;
- (id)MPPageIdentityWithUrlAsDefault:(id)a0;
- (id)MPPageIdentityWithUrlAndReturnNilIfNotHave:(id)a0;
- (void)updateUrlMappingWithOriginalUrl:(id)a0 fullUrl:(id)a1;
- (void)updateUrlMappingWithOriginalUrl:(id)a0 bizUin:(unsigned int)a1 msgId:(unsigned int)a2 itemIdx:(unsigned int)a3;
- (void).cxx_destruct;

@end
