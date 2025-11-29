@interface WAWebLocalStorage : NSObject

+ (id)getQueue;
+ (void)getData:(id *)a0 dataType:(id *)a1 withKey:(id)a2 storageId:(int)a3 appID:(id)a4;
+ (void)batchGetDataList:(id *)a0 dataTypeList:(id *)a1 withKeyList:(id)a2 storageId:(int)a3 appID:(id)a4;
+ (BOOL)setData:(id)a0 dataType:(id)a1 withKey:(id)a2 storageId:(int)a3 appID:(id)a4 getError:(id *)a5;
+ (BOOL)batchSetDataList:(id)a0 dataTypeList:(id)a1 withKeyList:(id)a2 storageId:(int)a3 appID:(id)a4 getError:(id *)a5;
+ (BOOL)removeDataWithKey:(id)a0 storageId:(int)a1 appID:(id)a2 getError:(id *)a3;
+ (void)clearDataWithAppID:(id)a0 storageId:(int)a1;
+ (unsigned long long)maxStorageLengthWithAppID:(id)a0 storageId:(int)a1;
+ (unsigned long long)maxItemLengthWithAppID:(id)a0;
+ (BOOL)getStorageInfoWithAppID:(id)a0 storageId:(int)a1 forKeys:(id *)a2 currentSize:(unsigned long long *)a3 limitSize:(unsigned long long *)a4 error:(id *)a5;
+ (BOOL)getStorageSizeWithAppID:(id)a0 currentSize:(unsigned long long *)a1 error:(id *)a2;
+ (unsigned long long)ceilToKBWithByte:(unsigned long long)a0;

@end
