@class NSString, NSDictionary;
@protocol BDUGCertProtocol;

@interface BDLGlobalConfig : NSObject

@property BOOL isInitialized;
@property (copy) NSString *appID;
@property (copy) NSString *deviceID;
@property (copy) NSString *baseURLString;
@property (copy) id /* block */ restrictMode;
@property (copy) id /* block */ coldLaunchTimestamp;
@property long long launchType;
@property long long backgroundLaunchType;
@property (copy) id /* block */ removeRemoteLocationData;
@property (retain) id<BDUGCertProtocol> cert;
@property (retain) NSDictionary *certDict;
@property long long headingOrientation;
@property (copy) id /* block */ language;
@property (copy) NSString *countryView;
@property double initializeTime;
@property (retain) NSDictionary *defaultSettings;
@property (copy) id /* block */ personalRecommendIsOn;

+ (BOOL)isTeenMode;
+ (id)appChannel;
+ (id)sharedConfig;
+ (id)appVersion;
+ (id)sdkVersion;
+ (id)devicePlatform;

- (BOOL)checkLazyInitSuccess;
- (void).cxx_destruct;
- (id)init;

@end
