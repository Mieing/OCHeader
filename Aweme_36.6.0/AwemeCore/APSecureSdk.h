@class NSOperationQueue;

@interface APSecureSdk : NSObject

@property (retain, nonatomic) NSOperationQueue *asyncTaskQueue;
@property (nonatomic) BOOL hasInited;

+ (void)clearStorage;
+ (void)setupEnvironmentMode:(int)a0;
+ (BOOL)isSupportFaceShield;
+ (BOOL)isTrackingAuthorization;
+ (id)sharedInstance;

- (void)initializeSecuritySDKTask:(id)a0;
- (void)setSecuritySDKConfig:(long long)a0;
- (void)setRpcConfiguration:(id)a0;
- (void)initWithRpcConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
