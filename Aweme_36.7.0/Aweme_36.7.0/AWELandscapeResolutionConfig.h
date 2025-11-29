@interface AWELandscapeResolutionConfig : NSObject

+ (id)resolutionConfig;
+ (long long)blockMaxCount;
+ (long long)blockMaxTime;
+ (BOOL)enableChangeResolutionForConfigWithEnterFrom:(id)a0;
+ (id)resolutionWithManualGearTypes:(unsigned long long)a0;
+ (BOOL)enableChangeResolutionWithEnterFrom:(id)a0 model:(id)a1;
+ (unsigned long long)cachedGearTypeWithEnterFrom:(id)a0 model:(id)a1;
+ (void)updateCachedGearType:(unsigned long long)a0 enterFrom:(id)a1 model:(id)a2;
+ (id)numberWithGearTypes:(unsigned long long)a0;
+ (id)numberWithReminderState:(long long)a0;

@end
