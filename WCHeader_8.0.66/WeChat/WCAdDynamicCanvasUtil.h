@interface WCAdDynamicCanvasUtil : NSObject

+ (BOOL)canOpenAdDynamicCanvasPage:(id)a0;
+ (void)tryToOpenAdDynamicCanvasPage:(id)a0;
+ (void)tryToOpenAdDynamicCanvasPage:(id)a0 finderJumpInfo:(id)a1;
+ (BOOL)tryToOpenAdDynamicCanvasFromDeeplinkWithAppId:(id)a0 query:(id)a1;
+ (BOOL)tryToJumpFallbackPage:(id)a0;
+ (id)fetchLocalResourceCache:(id)a0 url:(id)a1;
+ (void)registerLiteAppJsApi;
+ (id)appendParamsToUrl:(id)a0 andUpdateExtraInfo:(id)a1 withPageInfo:(id)a2;
+ (BOOL)jumpAdWebView:(id)a0 pageInfo:(id)a1 viewController:(id)a2 jumpAnimationType:(int)a3;
+ (id)genStatExtString:(id)a0;
+ (id)fetchShareWebUrl:(id)a0 pageInfo:(id)a1;
+ (id)genShareAdXml:(id)a0 shareWebUrl:(id)a1;
+ (void)publishPlatformViewEvent:(id)a0 event:(id)a1 params:(id)a2;
+ (id)genPageInfoFromCanvasLoadParams:(id)a0;
+ (BOOL)isIntendingToLoadDynamicCanvas:(id)a0;

@end
