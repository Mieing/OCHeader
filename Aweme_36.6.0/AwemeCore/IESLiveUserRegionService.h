@interface IESLiveUserRegionService : NSObject

+ (id)geoNameID;
+ (BOOL)isNotMainland;
+ (BOOL)isInMainland;
+ (BOOL)isOverseaNewUser;
+ (BOOL)isOverseaOldUser;
+ (BOOL)isInHMT;
+ (long long)overseaSearchCount;

@end
