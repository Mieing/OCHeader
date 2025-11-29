@class NSString, NSDictionary;

@interface IESLiveIMAppInfo : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *appKey;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *installId;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *ttToken;
@property (copy, nonatomic) NSString *ttSDKVersion;
@property (nonatomic) long long clientVersionNumber;
@property (nonatomic) long long platform;
@property (nonatomic) long long networkStatus;
@property (nonatomic) long long serviceId;
@property (nonatomic) long long methodId;
@property (copy, nonatomic) NSString *urlIdentify;
@property (nonatomic) long long hostPushServiceId;
@property (nonatomic) long long hostPushMethodId;
@property (copy, nonatomic) NSDictionary *extraHeaders;

+ (int)p_getClientVersionNumber;
+ (int)p_currentPlatform;
+ (int)p_currentNetworkStatus;
+ (id)appInfoWithBlank;
+ (id)appInfoForUniversal:(id)a0;

- (void).cxx_destruct;

@end
