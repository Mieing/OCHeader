@class NSString, NSMutableDictionary, AMapPrivacy, NSObject;
@protocol OS_dispatch_queue;

@interface AMapServices : NSObject <NSCopying, NSMutableCopying> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (readonly, nonatomic) long long authorizationStatus;
@property (readonly, nonatomic) NSString *authorizationInfo;
@property long long authorizationStatus;
@property (copy, nonatomic) NSString *authorizationInfo;
@property (nonatomic) BOOL analyticsEnabled;
@property (retain, nonatomic) AMapPrivacy *privacy;
@property (retain, nonatomic) NSMutableDictionary *authKeysDic;
@property (copy, nonatomic) NSString *apiKey;
@property (nonatomic) BOOL enableHTTPS;
@property (nonatomic) BOOL crashReportEnabled;
@property (readonly, nonatomic) NSString *identifier;

+ (id)getEncryptedXInfoData21;
+ (id)lctArgsWithComponent:(id)a0;
+ (id)commonHTTPHeadersWithComponent:(id)a0;
+ (id)postRequestHTTPHeadersWithComponent:(id)a0 logVersion:(id)a1;
+ (id)publicPostDataWithComponent:(id)a0 logVersion:(id)a1;
+ (id)responseHeaderWithRestResponse:(id)a0 response:(id)a1 request:(id)a2;
+ (id)commonHTTPHeadersWithComponent:(id)a0 logVersion:(id)a1 withXinfo:(BOOL)a2;
+ (id)getEncryptedXInfoData20;
+ (id)platInfoWithComponent:(id)a0;
+ (id)patchRequestParams;
+ (id)sharedServices;

- (void)sendAuthRequestWithComponent:(id)a0 authKeys:(id)a1 params:(id)a2 handler:(id /* block */)a3;
- (id)getAuthKeysForProduct:(id)a0;
- (void)requestAuthWithComponent:(id)a0 authKeys:(id)a1 params:(id)a2 updateCache:(BOOL)a3 handler:(id /* block */)a4;
- (void)updatePrivacyShow:(long long)a0 privacyInfo:(long long)a1 component:(id)a2;
- (void)updatePrivacyAgree:(long long)a0 component:(id)a1;
- (BOOL)checkPrivacyStatus:(id *)a0 component:(id)a1;
- (void)setUpAnalytics;
- (void)onNetworkTypeChanged:(id)a0;
- (void)onReceiveMemoryWarning:(id)a0;
- (void)uploadAnalyticsInfo;
- (void)deallocOperation;
- (void)initAnalytics;
- (void)sendStatisticsWithComponent:(id)a0 handler:(id /* block */)a1;
- (void)registerWithComponent:(id)a0 authKeys:(id)a1 params:(id)a2 handler:(id /* block */)a3;
- (void)saveAuthKeys:(id)a0 product:(id)a1;
- (void)showKeyAuthorizationInfo:(id)a0 responseHeader:(id)a1 forComponent:(id)a2;
- (void)prepareCommonCloldConfigKeys:(id)a0;
- (void)handleCommonCloudConfigs:(id)a0 withComponent:(id)a1;
- (void)registerAuthWithComponent:(id)a0 authKeys:(id)a1 forceUpdate:(BOOL)a2 handler:(id /* block */)a3;
- (id)keyAuthInfoWithServerInfo:(id)a0;
- (void)validatingAPIKey;
- (void)sendInitInfoWithComponent:(id)a0;
- (void)registerWithComponent:(id)a0;
- (void)registerAuthWithComponent:(id)a0 authKeys:(id)a1 handler:(id /* block */)a2;
- (void)sendAuthRequestWithComponent:(id)a0 authKeys:(id)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initSingleton;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
