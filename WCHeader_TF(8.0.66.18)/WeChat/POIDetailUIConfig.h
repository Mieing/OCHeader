@interface POIDetailUIConfig : NSObject

+ (BOOL)enableUsePOIDetailFlutterVC:(unsigned int)a0;
+ (BOOL)enableShowETAOnPOIDetailVC;
+ (BOOL)enableChatPOIFinderListPrefetch;
+ (unsigned long long)getPoiFinderListPrefetchExpireSeconds;

@end
