@interface AWENearbyTripGuideDualManager : NSObject

+ (id)tripGuideTrackParams:(long long)a0;
+ (void)trackNearbyRefresh:(long long)a0 refreshMethod:(id)a1;
+ (void)trackNearbyLoadMore:(long long)a0 actionType:(id)a1 loadNumber:(long long)a2;
+ (BOOL)enableTripGuideDual:(long long)a0;
+ (void)recordPrevParams:(long long)a0 feedType:(long long)a1;
+ (id)tripGuideTrackParams:(long long)a0 needPrevParams:(BOOL)a1;
+ (id)currentLocatedCityName:(long long)a0;
+ (BOOL)enableTripGuideDual:(long long)a0 city:(id)a1;
+ (id)forceCityCode;
+ (id)forceCityName;
+ (id)sameCityType:(long long)a0 city:(id)a1;
+ (id)sameCityType:(long long)a0;
+ (id)userEnterFrom:(long long)a0;

@end
