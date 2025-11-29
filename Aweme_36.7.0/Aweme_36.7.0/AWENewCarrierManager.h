@class AWECarrierLoginPhoneModel, NSLock, NSDate;

@interface AWENewCarrierManager : NSObject

@property (retain, nonatomic) NSDate *latestSuccessRequestDate;
@property (retain, nonatomic) AWECarrierLoginPhoneModel *phoneModel;
@property (retain, nonatomic) NSLock *recordLock;
@property (nonatomic) BOOL hasInitialized;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) NSDate *latestSuccessTokenRequestDate;
@property (nonatomic) BOOL usedCacheInRequest;

+ (Class)aAWEUserModuleConfigCommonAdapterClass;
+ (id)sharedManager;

- (long long)availabeCarrierType;
- (void)requestPhoneNumberOfCarrier:(long long)a0 enterMethod:(id)a1 scene:(long long)a2 completion:(id /* block */)a3;
- (void)requestTokenDictOfCarrier:(long long)a0 completion:(id /* block */)a1;
- (void)requestMobileAuthOfCarrier:(long long)a0 completion:(id /* block */)a1;
- (void)requestPhoneNumberOfCarrier:(long long)a0 enterMethod:(id)a1 completion:(id /* block */)a2;
- (void)enableShowCarrierOneKeyLogin:(id /* block */)a0;
- (void)prepareToRequestTokenDictOfCarrier:(long long)a0;
- (id)nonInitializedError;
- (id)lowNetworkError;
- (id)latestStoredPhoneModelOfCarrier:(long long)a0;
- (id)requestPhoneNumberOfCarrier:(long long)a0 enterMethod:(id)a1 scene:(long long)a2;
- (void)recordCarrierMaskToken:(id)a0 maskTokenScene:(unsigned long long)a1;
- (BOOL)enableUseTokenCacheBeforeRequest;
- (void)recordCarrierMaskTokenScene:(unsigned long long)a0;
- (id)requestTokenDictOfCarrier:(long long)a0;
- (id)requestMobileAuthOfCarrier:(long long)a0;
- (void)recordMaskPhoneNumber:(id)a0 carrierType:(long long)a1;
- (void)recordCarrierMaskToken:(id)a0;
- (void)recordCarrierValidateToken:(id)a0;
- (id)aAWEUserModuleConfigCommonAdapter;
- (id)latestStoredPhoneModel;
- (BOOL)hasUsedTokenCacheInRequest;
- (void)clearCarrierToken;
- (void).cxx_destruct;
- (id)init;
- (void)startup;
- (void)dealloc;

@end
