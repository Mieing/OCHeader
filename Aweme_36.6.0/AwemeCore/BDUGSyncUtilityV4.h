@interface BDUGSyncUtilityV4 : NSObject

+ (id)did;
+ (id)commonParamsData;
+ (id)dataFromFileForKey:(id)a0;
+ (BOOL)saveDataToFile:(id)a0 forKey:(id)a1;
+ (BOOL)deleteDataFromFileForKey:(id)a0;
+ (BOOL)deleteFuzzyDataFromFileForKey:(id)a0;
+ (double)dbStorageSize;
+ (double)fileStorageSize;
+ (id)topicIDFromReqID:(id)a0;
+ (id)stringWithExtra:(id)a0 channel:(unsigned long long)a1;
+ (id)compressData:(id)a0 success:(BOOL *)a1;
+ (id)headerWithCtrl:(int)a0 andReason:(int)a1;
+ (id)uid;
+ (id)header;
+ (id)syncDirectory;

@end
