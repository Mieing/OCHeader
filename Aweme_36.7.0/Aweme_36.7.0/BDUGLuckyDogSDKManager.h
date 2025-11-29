@class NSDictionary, NSString;

@interface BDUGLuckyDogSDKManager : NSObject <BDUGLuckyDogSDKProtocol>

@property (readonly, copy, nonatomic) NSDictionary *currentConfiguration;
@property (nonatomic) BOOL isSDKEnabled;
@property (nonatomic) BOOL isDebugModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSDKEnabled;
+ (BOOL)isBetweenActivityTime:(id)a0;
+ (id)luckyDogSDKVersion;
+ (void)sdkSessionLaunch;
+ (void)sdkConfigDidUpdate;
+ (void)sdkDidStartUp;
+ (id)currentConfiguration;
+ (id)sharedInstance;
+ (void)setDebugMode:(BOOL)a0;
+ (id)serviceProtocol;
+ (BOOL)isDebugMode;

- (void)sdkConfigDidUpdate;
- (void)__configLuckyServiceSettings:(id)a0;
- (id)init;

@end
