@interface QBAnalyticsInterface : NSObject

+ (void)initAnalytics;
+ (void)reportURL:(id)a0;
+ (BOOL)doReport:(id)a0 isSucceed:(BOOL)a1 elapse:(long long)a2 size:(long long)a3 params:(id)a4;

@end
