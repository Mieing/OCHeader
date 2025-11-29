@class NSDictionary;

@interface TTTrackerConfiguration : NSObject {
    NSDictionary *settings;
}

@property (readonly) unsigned long long cacheExpirationSeconds;
@property (readonly) BOOL optEventMainThreadReductionEnabled;
@property (readonly) BOOL optTTNetCostReductionEnabled;
@property (readonly) BOOL forwardRequestDowngradable;
@property (readonly) BOOL optJSONUsingStream;
@property (readonly) BOOL commonParamsEnabled;
@property (readonly) unsigned long long optPriorityFunctionEffectDelaySeconds;
@property (readonly) BOOL optTTTrackerIsInhouseVersionGetter;
@property (readonly) NSDictionary *dataRefererOptions;
@property (readonly) NSDictionary *byteioOptions;
@property (readonly) NSDictionary *networkOptions;
@property (readonly) BOOL optEntryQueueAdjust;
@property (readonly) BOOL bugfixPriorityFallback;
@property (readonly) BOOL optInitPriorityAsync;
@property (nonatomic) unsigned long long cacheExpirationSeconds;
@property (nonatomic) BOOL optEventMainThreadReductionEnabled;
@property (nonatomic) BOOL optTTNetCostReductionEnabled;
@property (nonatomic) BOOL forwardRequestDowngradable;
@property (nonatomic) BOOL optJSONUsingStream;
@property (nonatomic) BOOL commonParamsEnabled;
@property (nonatomic) unsigned long long optPriorityFunctionEffectDelaySeconds;
@property (nonatomic) BOOL optTTTrackerIsInhouseVersionGetter;
@property (retain, nonatomic) NSDictionary *dataRefererOptions;
@property (retain, nonatomic) NSDictionary *byteioOptions;
@property (retain, nonatomic) NSDictionary *networkOptions;
@property (nonatomic) BOOL bugfixPriorityFallback;
@property (nonatomic) BOOL optEntryQueueAdjust;
@property (nonatomic) BOOL optInitPriorityAsync;

+ (id)shared;

- (void)_applyKeys;
- (id)objectForSettingsKey:(id)a0;
- (void).cxx_destruct;
- (void)apply:(id)a0;
- (void)_reset;

@end
