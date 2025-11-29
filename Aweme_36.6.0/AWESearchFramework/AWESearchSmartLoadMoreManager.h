@interface AWESearchSmartLoadMoreManager : NSObject

+ (double)smartLoadMorePreLoadDistanceForTab:(id)a0 spanCount:(long long)a1 speed:(double)a2;
+ (BOOL)enableSmartLoadMoreWithTab:(id)a0 spanCount:(long long)a1;
+ (BOOL)enableSmartLoadMoreWithTab:(id)a0;
+ (long long)smartLoadMoreDefaultCountForTab:(id)a0 spanCount:(long long)a1;
+ (id)smartLoadMoreConfigForTab:(id)a0 spanCount:(long long)a1;
+ (id)smartLoadMoreIOSRulesForTab:(id)a0 spanCount:(long long)a1;

@end
