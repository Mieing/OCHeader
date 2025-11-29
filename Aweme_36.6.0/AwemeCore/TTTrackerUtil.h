@interface TTTrackerUtil : NSObject

+ (id)onTheFlyParameter;
+ (BOOL)isInHouseVersion;
+ (void)vacuum:(id)a0;
+ (id)dateStringSince:(double)a0;
+ (id)sdkDirectory;
+ (id)milloSecondsInterval;
+ (long long)globalIncreaseIdentifier;
+ (long long)globalIncreaseIdentifierV1;
+ (id)terminateDictionaryWithDictionary:(id)a0;
+ (id)launchDictionaryWithDictionary:(id)a0;
+ (id)eventDictionaryWithDictionary:(id)a0;
+ (void)incrementalVacuum:(id)a0 after:(unsigned long long)a1;
+ (id)dateNowString;
+ (void)addIDsToEvent:(id)a0;
+ (id)eventPrams:(id)a0 eventIndex:(long long)a1;
+ (long long)increaseEventIdentifier;
+ (void)resetGlobalIncreaseIdentifier;
+ (id)globalIncreaseIdentifierLock;
+ (void)manualVacuum:(id)a0;
+ (id)bundleVersion;
+ (id)formatter;
+ (id)appVersion;
+ (id)currentInterval;
+ (id)uuid;
+ (unsigned long long)sdkVersion;
+ (long long)cachedEvents;
+ (void)incrementalVacuum:(id)a0;

@end
