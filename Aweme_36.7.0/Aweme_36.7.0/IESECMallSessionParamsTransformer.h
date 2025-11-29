@interface IESECMallSessionParamsTransformer : NSObject

+ (id)getDeliverySessionIdFromParams:(id)a0;
+ (id)mallTransparentQueryStringWithParams:(id)a0 sourceQueryString:(id)a1 forceReplace:(BOOL)a2;
+ (BOOL)checkMallTransparentFormat:(id)a0;
+ (id)parseMallTransparentQueryString:(id)a0;
+ (id)mallTransparentQueryStringWithParams:(id)a0;

@end
