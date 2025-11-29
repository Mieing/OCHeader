@class NSString;

@interface AWEIncentiveCommonServiceModuleService : HTSService <AWEIncentiveCommonServiceModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isDeviceIDEmptyInNetworkCommonParams;
+ (BOOL)fixDIDIsEmptyClientABTestValue;
+ (void)registerSPTimeMessage:(id)a0;
+ (unsigned long long)currentSPTime;
+ (id)currentSPTimeDescription;
+ (void)unRegisterSPTimeMessage:(id)a0;
+ (id)videoLimitConfig;
+ (id)pageNameForViewController:(id)a0;
+ (id)accurateCurrentServerDate;
+ (id)pageNameDicts;

- (void)showRepeatNoticeIfNeeded;
- (void)setReadTaskItemID:(id)a0;
- (void)setupAWECallAppIncentiveLinkOptimizeManager;

@end
