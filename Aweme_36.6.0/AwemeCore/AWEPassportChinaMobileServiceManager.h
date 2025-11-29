@class NSString;

@interface AWEPassportChinaMobileServiceManager : NSObject <AWEPassportCarrierServiceProtocol>

@property (nonatomic) BOOL didRegisterSDK;
@property (nonatomic) double timeout;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerChinaMobileService;
- (void)registerChinaMobileServiceWithCarrierType:(long long)a0;
- (BOOL)isAvailableWithCarrierType:(long long)a0;
- (void)_requestTokenWithCompletion:(id /* block */)a0;
- (void)registerWithAppID:(id)a0 appKey:(id)a1 timeout:(double)a2;
- (void)requestSecurityPhoneNumber:(id /* block */)a0 timeout:(double)a1;
- (void)requestTokenDictionary:(id /* block */)a0;
- (void)requestMobileAuth:(id /* block */)a0;
- (id)carrierAppId;
- (id)_simulatorUnsupportError;
- (void).cxx_destruct;
- (BOOL)isAvailable;

@end
