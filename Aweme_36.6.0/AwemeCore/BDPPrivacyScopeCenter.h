@class NSMutableDictionary, NSMutableSet;

@interface BDPPrivacyScopeCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *privacyContractData;
@property (retain, nonatomic) NSMutableSet *readedApps;
@property (nonatomic) BOOL isAuthorizing;

+ (id)sharedCenter;

- (void)removeAllCache;
- (BOOL)needCheckNewPrivacyConstract:(id)a0;
- (BOOL)hasAuthorizedForApp:(id)a0;
- (void)requirePrivacyScopeAuthorize:(unsigned long long)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)recordPrivacyContractAgreed:(id)a0;
- (BOOL)hasScope:(unsigned long long)a0 uniqueID:(id)a1;
- (void)requirePrivacyContractAuthorize:(id)a0 completion:(id /* block */)a1;
- (void)openPrivacyConstractWithUniqueID:(id)a0;
- (id)privacyContractInfoForApp:(id)a0;
- (void)readPrivacyConstractCacheForApp:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
