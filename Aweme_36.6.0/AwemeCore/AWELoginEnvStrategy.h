@class NSString, NSDictionary, NSArray;

@interface AWELoginEnvStrategy : NSObject

@property (nonatomic) BOOL hasRequested;
@property (nonatomic) BOOL accountSupportGoogleLogin;
@property (nonatomic) BOOL accountSupportEmailLogin;
@property (copy, nonatomic) NSString *currentRegion;
@property (copy, nonatomic) NSDictionary *openRegionsMap;
@property (copy, nonatomic) NSArray *openRegionsArray;

+ (BOOL)accountSupportGoogleLogin;
+ (BOOL)accountSupportEmailLogin;
+ (id)openRegionsMap;
+ (id)openRegionsArray;
+ (id)currentRegionString;
+ (void)startUp;
+ (id)sharedInstance;

- (void)requestDataIfNeed;
- (void)startUpLoginEnv;
- (void).cxx_destruct;
- (void)startRequest;

@end
