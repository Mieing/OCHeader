@interface MMLocationUtil : NSObject

+ (void)clearLBSCacheIfNeeded;
+ (void)clearLBSCache;
+ (id)locationMsgWrapFromMsgWrap:(id)a0;
+ (id)locationMsgWrapFromPoiInfo:(id)a0;
+ (id)poiInfoFromMsgWrap:(id)a0;
+ (id)favLocationItemFromPoiInfo:(id)a0;
+ (id)poiInfoFromFavLocationItem:(id)a0;
+ (id)poiInfoFromWcLocationInfo:(id)a0;
+ (id)poiInfoFromCardInfo:(id)a0;

@end
