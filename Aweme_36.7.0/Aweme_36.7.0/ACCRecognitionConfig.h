@interface ACCRecognitionConfig : NSObject

+ (BOOL)supportScene;
+ (unsigned long long)entryConfig;
+ (unsigned long long)functionConfig;
+ (long long)functionAB;
+ (long long)entryAB;
+ (id)thresholdKey:(unsigned long long)a0;
+ (id)thresholdInfo;
+ (id)smartScanDetectModeFromSettings;
+ (BOOL)supportCategory;
+ (BOOL)longPressEntry;
+ (BOOL)barItemEntry;
+ (BOOL)onlySupportCategory;
+ (double)thresholdFor:(unsigned long long)a0;
+ (BOOL)supportAnimal;
+ (BOOL)enableAutoScanForRecogitionOptimize;
+ (BOOL)enabled;

@end
