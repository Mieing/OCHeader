@class NSString, WCTDatabase, WCTTable;

@interface WAAppTaskDB : NSObject

@property (retain) NSString *appID;
@property (retain) WCTDatabase *db;
@property (retain) WCTTable *tableLocalStorageMainInfo;
@property (retain) WCTTable *tableLocalStorageDataInfo_1;
@property (retain) WCTTable *tableLocalStorageLengthInfo;

- (id)initWithAppID:(id)a0;
- (void)dealloc;
- (void)open;
- (BOOL)runTransaction:(id /* block */)a0;
- (void)close;
- (unsigned long long)getLocalStorageMainStorageLength;
- (BOOL)setLocalStorageMainStorageLength:(unsigned long long)a0 lastModifyTime:(unsigned int)a1;
- (void)getLocalStorageData:(id *)a0 dataType:(id *)a1 withKey:(id)a2 storageId:(int)a3;
- (void)batchGetLocalStorageDataList:(id *)a0 dataTypeList:(id *)a1 withKeyList:(id)a2 storageId:(int)a3;
- (unsigned int)getLocalStorageKeyAndDataLengthWithKey:(id)a0 storageId:(int)a1;
- (unsigned long long)getLocalStorageKeyAndDataLengthWithKeyList:(id)a0 storageId:(int)a1;
- (unsigned int)getLocalStorageKeyAndDataLengthWithStorageId:(int)a0;
- (BOOL)setLocalStorageKeyAndDataLengthWithStorageId:(int)a0 length:(unsigned long long)a1 lastModifyTime:(unsigned int)a2;
- (id)getLocalStorageAllKeys:(int)a0;
- (BOOL)setLocalStorageData:(id)a0 dataType:(id)a1 withKey:(id)a2 storageId:(int)a3 lastModifyTime:(unsigned int)a4;
- (BOOL)batchSetLocalStorageDataList:(id)a0 dataTypeList:(id)a1 withKeyList:(id)a2 storageId:(int)a3 lastModifyTime:(unsigned int)a4 handle:(id)a5;
- (BOOL)removeLocalStorageDataWithKey:(id)a0 storageId:(int)a1;
- (void)clearLocalStorage:(int)a0;
- (void)openDB;
- (void)openTable;
- (void)updateTable;
- (id)setupTableWithName:(id)a0 tableClass:(Class)a1;
- (void).cxx_destruct;

@end
