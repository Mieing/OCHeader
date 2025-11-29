@interface AWEProfileTrackerManager : NSObject

+ (void)trackEvent:(id)a0 originalParams:(id)a1 profileContext:(id)a2 logExtraDict:(id)a3 enableMXBTracker:(BOOL)a4;
+ (void)addDictionaryTo:(id)a0 fromDictionary:(id)a1 conflictModels:(id)a2;
+ (void)reportConflictParamsIfNeed:(id)a0 aspectParams:(id)a1 transmissionParams:(id)a2;
+ (void)checkParamsConflictWithKey:(id)a0 value:(id)a1 toDic:(id)a2 conflictModels:(id)a3;
+ (void)trackEvent:(id)a0 originalParams:(id)a1 profileContext:(id)a2 logExtraDict:(id)a3;

@end
