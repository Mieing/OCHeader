@interface JsonHelper : NSObject

+ (id)convertToJsonData:(id)a0 :(BOOL)a1;
+ (id)mergeJson:(id)a0 :(id)a1;
+ (void)mergeJson:(id)a0 withSrc:(id)a1;
+ (id)dictionaryWithJsonString:(id)a0;

@end
