@interface AWEGrouponSchemaUtil : NSObject

+ (id)topToolBubbleSchemaWith:(id)a0;
+ (id)nearbyC2Container;
+ (id)topToolEntranceSchemaWith:(id)a0 entranceShowName:(id)a1 extraParams:(id)a2;
+ (id)stringByAppendingSecLinkParamsWithSchema:(id)a0;
+ (id)getDictionaryOfURL:(id)a0 forKey:(id)a1;
+ (id)getTopToolNecessaryTrackParamsOfURL:(id)a0;
+ (BOOL)needToAppendSecLinkParamsWithSchema:(id)a0;
+ (BOOL)isSchemaInWhiteList:(id)a0 whiteList:(id)a1;
+ (BOOL)isHTTP:(id)a0;
+ (id)extractHTTPHostFromSchema:(id)a0;
+ (BOOL)isWebLink:(id)a0;

@end
