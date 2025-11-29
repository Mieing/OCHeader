@class NSArray, NSDictionary, BDASplashBidSplashInfo, NSString;

@interface BDASplashGlobalConfiger : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } configLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } bidSplashLock;
}

@property (copy, nonatomic) NSDictionary *config;
@property (retain, nonatomic) BDASplashBidSplashInfo *bidSplashInfo;
@property (readonly, nonatomic) long long showLimit;
@property (readonly, nonatomic) double serverTime;
@property (readonly, nonatomic) double leaveInterval;
@property (readonly, nonatomic) double splashInterval;
@property (readonly, nonatomic) double coldBootInterval;
@property (readonly, nonatomic) double splashLoadInterval;
@property (readonly, nonatomic) long long pkType;
@property (readonly, copy, nonatomic) NSDictionary *bidControlInfo;
@property (readonly, copy, nonatomic) NSArray *disableLaunchModes;
@property (readonly, copy, nonatomic) NSString *logExtra;
@property (readonly, copy, nonatomic) NSArray *penaltyPeriod;
@property (readonly, copy, nonatomic) NSDictionary *periodFirstMap;
@property (readonly, copy, nonatomic) NSDictionary *splashDowngradeConfig;

+ (id)sharedInstance;

- (void)updateConfigInfo:(id)a0;
- (id)globalConfigFromDisk;
- (id)initPrivate;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
