@interface AWESiriSuggestABSettings : NSObject

+ (BOOL)enableSiriSuggest;
+ (BOOL)enableSiriSuggestOnlyPlayScene;
+ (BOOL)enableSiriSuggestWithSceneType:(id)a0;
+ (BOOL)enableSiriSuggestConfigFromPushService;
+ (BOOL)enableSiriSuggestConfigPlayOnlyHotFeed;
+ (id)getUserActivityToIntentConfig;
+ (BOOL)disableSiriDonation;
+ (BOOL)switchUserActivityDonationToMediaIntentsDonation;
+ (BOOL)switchUserActivityDonationToCustomIntentsDonation;
+ (id)siriDonationLimitConfig;
+ (id)donationProbabilityThrottleForDeviceResourceConfig;
+ (id)siriSuggestConfig;
+ (id)siriSuggestConfigWithSceneType:(id)a0;
+ (BOOL)p_sceneConfigDisabled;
+ (id)siriSuggestConfigSceneDict;
+ (id)siriSuggestDonationAmountConfig;
+ (BOOL)enableSiriSuggestForceDataRequest;
+ (BOOL)enableSiriSuggestCleanDonateData;
+ (long long)siriSuggestSafetyRetryCount;
+ (BOOL)enableSiriSuggestDonateAsync;
+ (BOOL)enableSiriSuggestConfigForScene:(id)a0;
+ (BOOL)enableSiriSuggestConfig;
+ (long long)siriSuggestDonationMultiplier:(id)a0;
+ (double)siriSuggestDonationDelayTime:(id)a0;
+ (unsigned long long)siriSuggestMultiDelaySendMode:(id)a0;
+ (id)siriSuggestDonationActionSceneMap:(id)a0;
+ (unsigned long long)getSiriDiagnosticPath;
+ (long long)clearSiriDonationDataIntervalInDays;
+ (BOOL)enableBatchFetchSiriConfigWithScene:(id)a0;
+ (id)getFinalSceneType:(id)a0;
+ (unsigned long long)getSiriSuggestPushTemplateDonateStrategy;
+ (BOOL)enableAsyncFlushDonationConfig;

@end
