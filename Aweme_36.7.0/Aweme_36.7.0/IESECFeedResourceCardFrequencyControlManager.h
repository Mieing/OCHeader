@interface IESECFeedResourceCardFrequencyControlManager : NSObject

+ (BOOL)shouldShowResourceCardWithShowFrequency:(id)a0 clickFrequency:(id)a1;
+ (void)addShowTimeStampWithShowFrequency:(id)a0;
+ (BOOL)shouldShowResourceCardWithCurrentTime:(long long)a0 Prefix:(id)a1 key:(unsigned long long)a2 interval:(long long)a3 triggerCount:(long long)a4;
+ (long long)cacheMaxSize;
+ (void)addTimeStamp:(long long)a0 forKey:(id)a1;
+ (void)addClickTimeStampWithClickFrequency:(id)a0;
+ (long long)currentTimeStamp;

@end
