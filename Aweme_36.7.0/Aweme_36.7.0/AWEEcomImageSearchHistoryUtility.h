@interface AWEEcomImageSearchHistoryUtility : NSObject

+ (id)userRecordSaveKey;
+ (BOOL)isLocalFile:(id)a0;
+ (id)saveImageToCache:(id)a0;
+ (id)getBaseURLString:(id)a0;
+ (id)searchHistory;
+ (void)deleteImageFromCache:(id)a0;
+ (id)generateImageFileName;
+ (void)saveRecordWitImage:(id)a0 filePath:(id)a1 URLString:(id)a2;
+ (void)removeRecordAtIndex:(long long)a0;
+ (id)storage;
+ (void)clearAll;
+ (id)imageCacheDirectory;

@end
