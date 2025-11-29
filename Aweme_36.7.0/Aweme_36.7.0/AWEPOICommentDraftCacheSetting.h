@interface AWEPOICommentDraftCacheSetting : NSObject

+ (long long)validDays;
+ (long long)cleanFrequency;
+ (id)settings;
+ (long long)cacheStrategy;
+ (long long)cacheCapacity;

@end
