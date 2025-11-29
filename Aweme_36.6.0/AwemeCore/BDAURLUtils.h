@interface BDAURLUtils : NSObject

+ (id)URLWithString:(id)a0 queryItems:(id)a1 fragment:(id)a2;
+ (id)queryItemAddingPercentEscapes:(id)a0;
+ (id)queryItemsForURL:(id)a0;
+ (id)_URLQueryStringWithParameters:(id)a0;
+ (id)URLWithString:(id)a0 queryItems:(id)a1;
+ (id)URLByInsertOrUpdateParameters:(id)a0 toURL:(id)a1;
+ (id)hostForURL:(id)a0;
+ (id)pathForURL:(id)a0;
+ (id)fragmentForURL:(id)a0;
+ (id)queryItemsWithoutDecodingForURL:(id)a0;
+ (id)URLWithString:(id)a0;

@end
