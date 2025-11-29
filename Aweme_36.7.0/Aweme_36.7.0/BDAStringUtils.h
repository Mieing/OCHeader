@interface BDAStringUtils : NSObject

+ (id)URLQueryStringWithParameters:(id)a0;
+ (id)decodeStringFromBase64Str:(id)a0;
+ (id)simpleDateStringSince:(double)a0;
+ (id)onlyDateStringSince:(double)a0;
+ (id)URLQueryStringWithoutEncodeWithParameters:(id)a0;
+ (id)paramItemsForString:(id)a0;
+ (id)paramStringForDictionary:(id)a0;
+ (id)URLWithURLString:(id)a0;
+ (id)URLStringWithString:(id)a0 parameters:(id)a1;
+ (id)parametersOfURLString:(id)a0;
+ (id)jointFragmentParamsDict:(id)a0 toURL:(id)a1;
+ (void)initialize;
+ (id)URLWithString:(id)a0 relativeToURL:(id)a1;

@end
