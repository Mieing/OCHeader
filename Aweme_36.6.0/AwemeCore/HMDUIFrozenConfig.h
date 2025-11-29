@interface HMDUIFrozenConfig : HMDTrackerConfig

@property (nonatomic) unsigned long long operationCountThreshold;
@property (nonatomic) double launchCrashThreshold;
@property (nonatomic) BOOL uploadAlog;
@property (nonatomic) BOOL enableGestureMonitor;
@property (nonatomic) unsigned long long gestureCountThreshold;
@property (nonatomic) BOOL enableViewStacksMonitor;
@property (nonatomic) BOOL enableVCStacksMonitor;
@property (nonatomic) BOOL enableDismissVCProtection;
@property (nonatomic) unsigned long long dismissOperationCountThreshold;
@property (nonatomic) BOOL enableTransitionMonitor;
@property (nonatomic) unsigned long long transitionRecordCountLimit;
@property (nonatomic) BOOL enableViewExtraInfoInjection;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;

@end
