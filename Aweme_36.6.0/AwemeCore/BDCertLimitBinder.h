@class NSString, NSDictionary;

@interface BDCertLimitBinder : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
}

@property (copy, nonatomic) NSString *maxAppVersion;
@property (copy, nonatomic) NSDictionary *dynamicCertToLimitMap;
@property (copy, nonatomic) NSDictionary *dynamicLimitDict;
@property (copy, nonatomic) NSDictionary *dynamicConditionDict;
@property (copy, nonatomic) NSDictionary *defaultCertToLimitMap;
@property (copy, nonatomic) NSDictionary *defaultLimitDict;
@property (copy, nonatomic) NSDictionary *defaultConditionDict;
@property (copy, nonatomic) NSDictionary *authMap;
@property (copy, nonatomic) NSDictionary *authLimitDict;
@property (copy, nonatomic) NSDictionary *authConditionDict;

- (void)clearDefaultLimits;
- (id)embedLimitMap;
- (id)embedConditionMap;
- (void)clearAuthMap;
- (void)clearDynamicLimits;
- (BOOL)validateSettingsWithCertMap:(id)a0 limitMap:(id)a1 conditionMap:(id)a2;
- (BOOL)searchInDynamicFirstWithCert:(id)a0 output:(id)a1;
- (BOOL)searchInDefaultWithCert:(id)a0 output:(id)a1;
- (BOOL)isNewVersionCert:(id)a0;
- (BOOL)validateCertMap:(id)a0;
- (BOOL)validateLimitMap:(id)a0;
- (BOOL)validateConditionMap:(id)a0;
- (void)setDefaultLimit:(id)a0;
- (void)setAuthLimit:(id)a0;
- (void)updateDynamicLimit:(id)a0;
- (id)findLimitToCert:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
