@interface AWESiriDonateUtils : NSObject

+ (id)jsonStringToDictionary:(id)a0;
+ (void)downloadImageWithURLString:(id)a0 alternativeURLs:(id)a1 completion:(id /* block */)a2;
+ (unsigned long long)getDonateIntentType:(id)a0;
+ (id)convertToIntentsModelUsingAweme:(id)a0 scene:(id)a1 withTrigger:(unsigned long long)a2;
+ (id)convertToIntentsModelUsingPushConfig:(id)a0 scene:(id)a1;
+ (id)handleDonationForAwemeModel:(id)a0 nextModel:(id)a1;
+ (id)convertToSiriIntentsModel:(id)a0 pushConfig:(id)a1 scene:(id)a2 withTrigger:(unsigned long long)a3;
+ (void)getDonateAWEAwemeModel:(id /* block */)a0;
+ (id)trimHashText:(id)a0;
+ (BOOL)enableIntentDonationForSceneType:(id)a0;
+ (id)sharedInstance;

@end
