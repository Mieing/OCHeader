@class NSDictionary, BDAThreadSafeArray, BDAThreadSafeDictionary;

@interface BDASDKSettingsManager : NSObject

@property (copy, nonatomic) NSDictionary *settings;
@property (nonatomic) long long requestIndex;
@property (nonatomic) long long retryCount;
@property (retain, nonatomic) BDAThreadSafeArray *completionArray;
@property (retain, nonatomic) BDAThreadSafeDictionary *updateHandlers;
@property (nonatomic) double lastRequestCPUTime;
@property (nonatomic) long long requiredStateVirtualStack;
@property (copy, nonatomic) NSDictionary *defaultParams;
@property (retain, nonatomic) BDAThreadSafeArray *headerRegisters;

+ (id)sharedInstance;
+ (id)_defaultSettings;

- (void)_setupDefaultSettings;
- (void)_registerSettings:(id)a0;
- (id)_mergeWithNewSettings:(id)a0 existSettings:(id)a1;
- (void)_updateSettingsWithParameters:(id)a0 completion:(id /* block */)a1 ignoreRequestInterval:(BOOL)a2;
- (BOOL)_shouldPauseUpdateRequire:(BOOL)a0;
- (id)_commonNetParams;
- (BOOL)_validateCommonParams;
- (void)_handleRequestWithParams:(id)a0;
- (id)_objectValueForSettingsKey:(id)a0 defaultValue:(id)a1;
- (BOOL)boolValueForSettingsKey:(id)a0 defaultValue:(BOOL)a1;
- (long long)integerValueForSettingsKey:(id)a0 defaultValue:(long long)a1;
- (id)objectValueForSettingsKey:(id)a0;
- (double)floatValueForSettingsKey:(id)a0 defaultValue:(double)a1;
- (void)registerDefaultSettings:(id)a0;
- (void)registerRequestHeaderWithHeaderRegister:(id /* block */)a0;
- (void)observeUpdateForConfigName:(id)a0 withHandler:(id /* block */)a1;
- (void)updateSettingsWithParameters:(id)a0 completion:(id /* block */)a1;
- (BOOL)boolValueForSettingsKey:(id)a0;
- (long long)integerValueForSettingsKey:(id)a0;
- (double)floatValueForSettingsKey:(id)a0;
- (id)stringValueForSettingsKey:(id)a0;
- (id)numberValueForSettingsKey:(id)a0;
- (id)arrayValueForSettingsKey:(id)a0;
- (id)dictionaryValueForSettingsKey:(id)a0;
- (id)unitTestWithMockJsonObj:(id)a0;
- (void)_setupObserver;
- (void).cxx_destruct;
- (id)init;
- (void)_updateSettings:(id /* block */)a0;

@end
