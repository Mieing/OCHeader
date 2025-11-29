@class NSString;

@interface AWEPassportChinaTelecomServiceManager : NSObject <AWEPassportCarrierServiceProtocol>

@property (nonatomic) double timeout;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appKey;
@property (nonatomic) BOOL didRegisterSDK;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isAvailableWithCarrierType:(long long)a0;
- (void)registerWithAppID:(id)a0 appKey:(id)a1 timeout:(double)a2;
- (void)requestSecurityPhoneNumber:(id /* block */)a0 timeout:(double)a1;
- (void)requestTokenDictionary:(id /* block */)a0;
- (void)requestMobileAuth:(id /* block */)a0;
- (id)carrierAppId;
- (void)registerChinaTelecomService;
- (void)registerChinaTelecomServiceWithCarrierType:(long long)a0;
- (id)requestPhoneNumberConfigWithTimeout:(double)a0;
- (void).cxx_destruct;
- (id)defaultConfig;
- (BOOL)isAvailable;

@end
