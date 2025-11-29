@class NSDictionary;
@protocol BDAAutoTrackerConfigProtocol;

@interface BDATMViewTrackerManager : NSObject

@property (retain, nonatomic) NSDictionary *config;
@property (retain, nonatomic) id<BDAAutoTrackerConfigProtocol> commitProtocol;

+ (id)addTrackerParamsWithView:(id)a0;
+ (void)forceBeginExposureForView:(id)a0;
+ (id)sharedManager;

- (BOOL)isAllowedClickTrackerWithWhiteList:(id)a0;
- (BOOL)isAllowedShowTrackerWithWhiteList:(id)a0;
- (void)BDASetupSwizzleNotification:(id)a0;
- (void)setupBDAutoTracker:(id)a0;
- (BOOL)isAllowedClickTracker:(id)a0;
- (BOOL)isAllowedShowTracker:(id)a0;
- (void)setViewTrackerConfig:(id)a0;
- (void)setupBDAutoTrackerConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
