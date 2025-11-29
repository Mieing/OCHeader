@interface BDUGSyncUtility : NSObject

+ (id)did;
+ (id)commonParamsData;
+ (id)dataFromFileForKey:(id)a0;
+ (BOOL)saveDataToFile:(id)a0 forKey:(id)a1;
+ (BOOL)deleteDataFromFileForKey:(id)a0;
+ (BOOL)deleteFuzzyDataFromFileForKey:(id)a0;
+ (double)dbStorageSize;
+ (double)fileStorageSize;
+ (void)saveIntegerValue:(long long)a0 forKey:(id)a1;
+ (void)saveBoolValue:(BOOL)a0 forKey:(id)a1;
+ (id)topicIDFromReqID:(id)a0;
+ (id)stringWithExtra:(id)a0 channel:(unsigned long long)a1;
+ (id)compressData:(id)a0 success:(BOOL *)a1;
+ (id)uid;
+ (id)header;
+ (long long)boolForKey:(id)a0 defaultValue:(BOOL)a1;
+ (id)syncDirectory;
+ (long long)integerForKey:(id)a0 defaultValue:(long long)a1;

@end
