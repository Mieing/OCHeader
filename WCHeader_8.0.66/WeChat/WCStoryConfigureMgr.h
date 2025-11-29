@class NSString;

@interface WCStoryConfigureMgr : MMUserService <MMServiceProtocol, MMConfigMgrExt>

@property (nonatomic) BOOL friendVisitSwitchOn;
@property (nonatomic) unsigned long long headerShowLimitCount;
@property (nonatomic) unsigned long long entranceInTimelineOfTimeDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)setupDynamicValue;
- (void)onMMDynamicConfigUpdated;

@end
