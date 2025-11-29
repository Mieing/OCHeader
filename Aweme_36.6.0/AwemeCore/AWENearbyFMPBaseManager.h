@class NSString;
@protocol AWENearbyFMPInjectProtocol;

@interface AWENearbyFMPBaseManager : NSObject

@property (nonatomic) double didLoadTime;
@property (nonatomic) double didLoadTimeTs;
@property (nonatomic) double didAppearTime;
@property (nonatomic) double startRequestTime;
@property (nonatomic) double startShowTime;
@property (copy, nonatomic) NSString *totalTimeCreate;
@property (nonatomic) BOOL trackStarted;
@property (nonatomic) BOOL isInterrupted;
@property (copy, nonatomic) NSString *interruptedReasonCode;
@property (nonatomic) double customFmpEndTimestamp;
@property (nonatomic) BOOL feedPreload;
@property (nonatomic) BOOL settingPreload;
@property (nonatomic) BOOL feedCache;
@property (nonatomic) BOOL settingCache;
@property (nonatomic) BOOL halfScreenLocationCache;
@property (retain, nonatomic) id<AWENearbyFMPInjectProtocol> injectDelegate;
@property (nonatomic) BOOL trackEnded;
@property (nonatomic) long long pageType;

+ (id)sharedInstance;

- (id)commonParams;
- (void)startShow;
- (void)updateFeedPreload:(BOOL)a0;
- (void)updateFeedCache:(BOOL)a0;
- (void)updateSettingPreload:(BOOL)a0;
- (void)updateSettingCache:(BOOL)a0;
- (long long)getCacheMode;
- (long long)getPreMode;
- (void)trackEventWithinterruptedReason:(id)a0;
- (void)registerFMPMessage;
- (void)unRegisterFMPMessage;
- (void)resetFmpEndTimestamp:(id)a0;
- (void)willDissappear;
- (void)updateHalfScreenLocationCache:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)startRequest;
- (void)didAppear;
- (void)applicationDidEnterBackground:(id)a0;
- (void)didLoad;

@end
