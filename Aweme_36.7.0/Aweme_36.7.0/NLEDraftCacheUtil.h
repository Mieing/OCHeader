@interface NLEDraftCacheUtil : NSObject

+ (id)getAllResourcePathInModel:(id)a0 draftFolder:(id)a1;
+ (id)readDictionaryFromPath:(id)a0 error:(id *)a1;
+ (BOOL)cleanFileInDirectory:(id)a0 exceptIn:(id)a1;
+ (id)fileSizeSetInPathSet:(id)a0;
+ (BOOL)isMediaResource:(id)a0;
+ (BOOL)fileSizeMatchFileInSet:(id)a0 Set:(id)a1;
+ (BOOL)cleanDraftCacheWithDraftFolder:(id)a0;
+ (id)sharedDictionary;

@end
