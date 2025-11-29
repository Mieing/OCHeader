@interface AWEDCardSettings : NSObject

+ (long long)retryTimes;
+ (long long)maxCacheCount;
+ (BOOL)collectEnabled;
+ (BOOL)dcardCompensateDisplayEventEnable;
+ (int)delayCallDidDisplay;
+ (BOOL)dcardUpdateEnable;
+ (double)freqValidTime;
+ (id)feedFreshScenesOfBitsRules:(id)a0;
+ (id)feedHotScenesOfBitsRules:(id)a0;
+ (float)reportBitsRate;
+ (float)feedFreshReportBitsRate;
+ (id)feedFreshAcceptBitsOfScenes;
+ (id)feedHotAcceptBitsOfScenes;
+ (BOOL)inflowPageRollBack;
+ (id)perfMonitorSettings;
+ (id)lynxSettings;
+ (id)recommendFeedsSettings;
+ (id)sortedBitsAccept;
+ (id)acceptBitsOfScenes;
+ (id)freshFeedsSettings;
+ (id)feedFreshScenesBitsSettings;
+ (id)feedFreshSortedBitsAccept;
+ (id)msicSettings;
+ (id)cellEventSettings;
+ (id)statsCacheSettings;
+ (id)fallBackScenes;
+ (id)dcardDebugSettingsSchema;
+ (BOOL)collectCPUEnabled;
+ (BOOL)collectFPSEnabled;
+ (BOOL)collectMemoryEnabled;
+ (BOOL)useSamplingEnabled;
+ (BOOL)useSelfTracerEnabled;
+ (int)maxCachedCountOfDCardStats;
+ (int)maxCachedDaysOfDCardStats;
+ (id)settings;

@end
