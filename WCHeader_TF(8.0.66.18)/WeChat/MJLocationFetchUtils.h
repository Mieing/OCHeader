@interface MJLocationFetchUtils : NSObject

+ (id)handler;
+ (void)setHandler:(id)a0;
+ (void)fetchLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 success:(id /* block */)a1 failure:(id /* block */)a2;
+ (void)fetchUserLocationWithSuccess:(id /* block */)a0 failure:(id /* block */)a1;
+ (id)buildLocationItemWithRealtimeLocationCache;
+ (id)buildLocationItemWithCacheItem:(id)a0;
+ (id)buildLocationItemWithPOIItem:(id)a0;
+ (id)buildFinderLocationWithLocationItem:(id)a0;
+ (id)buildLocationItemWithDictionary:(id)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
+ (id)convertGeographicInfoFromLocationItem:(id)a0;
+ (id)placeholderGeographicInfo;

@end
