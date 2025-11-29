@class NSString;

@interface AWEInteractionPreloadCondition : NSObject <AWEInteractionPreloadConditionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enabledWithReferString:(id)a0;
+ (double)preloadTriggerDelayTime;
+ (BOOL)enableTriggerAfterCellPreload;
+ (BOOL)enableBackupDequeOpt;
+ (unsigned long long)upCount;
+ (unsigned long long)downCount;
+ (BOOL)enablePreloadUpInteraction;
+ (BOOL)preloadAllFeed;
+ (BOOL)enableActivateInfoWithDataSpread;
+ (double)spreadInterval;
+ (BOOL)enableResetSpread;
+ (BOOL)checkIfNeedResetSpread:(id)a0;
+ (id)config;
+ (BOOL)enabled;


@end
