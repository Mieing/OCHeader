@class NSString, NSMutableArray;

@interface AWEExperienceStrategyInitManager : NSObject <AWEGokuPluginTargetProtocol>

@property (retain, nonatomic) NSMutableArray *launchStrategyInstanceList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)playWith:(id)a0;
- (void)onApplicationLaunch;
- (void)registerLaunchStrategy;
- (id)launchStrategyList;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)moduleNames;

@end
