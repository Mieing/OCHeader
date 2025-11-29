@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface YYKVStorage : NSObject {
    NSObject<OS_dispatch_queue> *_trashQueue;
    NSString *_dbPath;
    NSString *_dataPath;
    NSString *_trashPath;
    struct sqlite3 { } *_db;
    struct __CFDictionary { } *_dbStmtCache;
    double _dbLastOpenErrorTime;
    unsigned long long _dbOpenErrorCount;
}

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *dbPath;
@property (readonly, nonatomic) NSString *dbShmPath;
@property (readonly, nonatomic) NSString *dbWalPath;
@property (readonly, nonatomic) unsigned long long type;
@property (nonatomic) BOOL errorLogsEnabled;
@property (nonatomic) BOOL isDatabaseMalformed;

+ (void)setYYCacheLRUDisable:(BOOL)a0;

- (BOOL)_dbOpen;
- (BOOL)_dbInitialize;
- (BOOL)_dbExecute:(id)a0;
- (BOOL)_dbCheck;
- (struct sqlite3_stmt { } *)_dbPrepareStmt:(id)a0;
- (id)_dbJoinedKeys:(id)a0;
- (void)_dbBindJoinedKeys:(id)a0 stmt:(struct sqlite3_stmt { } *)a1 fromIndex:(int)a2;
- (id)_dbGetItemFromStmt:(struct sqlite3_stmt { } *)a0 excludeInlineData:(BOOL)a1;
- (BOOL)_dbClose;
- (BOOL)_dbDeleteItemWithKey:(id)a0;
- (BOOL)_dbDeleteItemWithKeys:(id)a0;
- (BOOL)_dbDeleteItemsWithSizeLargerThan:(int)a0;
- (void)_dbCheckpoint;
- (BOOL)_dbDeleteItemsWithTimeEarlierThan:(int)a0;
- (long long)_dbGetTotalItemSize;
- (id)_dbGetItemSizeInfoOrderByTimeAscWithLimit:(int)a0;
- (int)_dbGetTotalItemCount;
- (id)_dbGetItemWithKey:(id)a0 excludeInlineData:(BOOL)a1;
- (BOOL)_dbUpdateAccessTimeWithKey:(id)a0;
- (id)_dbGetValueWithKey:(id)a0;
- (id)_dbGetItemWithKeys:(id)a0 excludeInlineData:(BOOL)a1;
- (BOOL)_dbUpdateAccessTimeWithKeys:(id)a0;
- (id)getItemForKeys:(id)a0;
- (int)_dbGetItemCountWithKey:(id)a0;
- (BOOL)removeItemForKeys:(id)a0;
- (BOOL)removeItemsLargerThanSize:(int)a0;
- (BOOL)removeItemsEarlierThanTime:(int)a0;
- (BOOL)removeItemsToFitSize:(long long)a0;
- (void)removeAllItemsWithProgressBlock:(id /* block */)a0 endBlock:(id /* block */)a1;
- (id)getItemForKey:(id)a0;
- (id)getItemInfoForKey:(id)a0;
- (id)getItemInfoForKeys:(id)a0;
- (id)getItemValueForKeys:(id)a0;
- (BOOL)itemExistsForKey:(id)a0;
- (int)getItemsCount;
- (long long)getItemsSize;
- (BOOL)removeItemsToFitCount:(int)a0;
- (BOOL)saveItemWithKey:(id)a0 value:(id)a1;
- (id)getItemValueForKey:(id)a0;
- (void)trimWAL;
- (id)initWithPath:(id)a0 type:(unsigned long long)a1;
- (BOOL)saveItemWithKey:(id)a0 value:(id)a1 filename:(id)a2 extendedData:(id)a3;
- (BOOL)saveItemsFromDictionary:(id)a0;
- (BOOL)_fileMoveAllToTrash;
- (void)_fileEmptyTrashInBackground;
- (BOOL)_fileWriteWithName:(id)a0 data:(id)a1;
- (BOOL)_dbSaveWithKey:(id)a0 value:(id)a1 fileName:(id)a2 extendedData:(id)a3;
- (BOOL)_fileDeleteWithName:(id)a0;
- (id)_dbGetFilenameWithKey:(id)a0;
- (id)_dbGetFilenameWithKeys:(id)a0;
- (id)_dbGetFilenamesWithSizeLargerThan:(int)a0;
- (id)_dbGetFilenamesWithTimeEarlierThan:(int)a0;
- (id)_fileReadWithName:(id)a0;
- (BOOL)saveItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)removeAllItems;
- (void)_reset;
- (void)dealloc;
- (BOOL)removeItemForKey:(id)a0;

@end
