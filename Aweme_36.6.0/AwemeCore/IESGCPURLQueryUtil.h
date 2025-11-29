@interface IESGCPURLQueryUtil : NSObject

+ (id)appendURLQueryParamsWithString:(id)a0 params:(id)a1 coverOriginal:(BOOL)a2;
+ (id)hybridAddLoadURLQueryItemsWithSchema:(id)a0 queryItems:(id)a1 coverOriginal:(BOOL)a2 isEncodeLoadURL:(BOOL)a3;
+ (id)getHostWithUrlString:(id)a0;
+ (id)getQueryItemsWithUrlString:(id)a0;
+ (id)appendQueryItemsWithURL:(id)a0 params:(id)a1 coverOriginal:(BOOL)a2;
+ (id)hybridAddLoadURLQueryItemsWithURL:(id)a0 queryItems:(id)a1 coverOriginal:(BOOL)a2;
+ (id)getComponentsWithUrlString:(id)a0;
+ (id)getURLDecodedStringWithUrlString:(id)a0;

@end
