@class NSString, NSDictionary, NSTimer, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDUGDeepLinkSettingsManager : NSObject

@property (copy, nonatomic) NSDictionary *settings;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long appID;
@property (copy, nonatomic) id /* block */ did;
@property (copy, nonatomic) id /* block */ iid;
@property (retain, nonatomic) NSString *BDUGDeepLinkSettingsCustomerURL;
@property (nonatomic) BOOL enableRequestOptimize;
@property (nonatomic) BOOL settingsUpdatedSuccessful;
@property (nonatomic) BOOL isSettingsRequesting;

+ (id)sharedInstance;

- (id)settingsForKey:(id)a0 defaultValue:(id)a1;
- (void)fetchSettingsImmediatelyWithScene:(long long)a0;
- (void)fetchSettingsIfNeededWithScene:(long long)a0;
- (id)getRequestSourceFromScene:(long long)a0;
- (void)fetchSettingsImmediatelyFromTimer;
- (void)fetchSettingsByForce:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)onReachabilityChange:(id)a0;
- (void)updateTimer;

@end
