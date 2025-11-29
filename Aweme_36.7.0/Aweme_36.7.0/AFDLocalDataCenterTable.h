@interface AFDLocalDataCenterTable : NSObject

@property (nonatomic) BOOL hasDataSynced;
@property (nonatomic) BOOL isTableCreated;

+ (id)tableNameFromDatabase:(id)a0;
+ (id)tableNameInDatabase:(id)a0;

- (BOOL)needEncrypt;
- (id)syncQueryParams;
- (id)reportQueryParams;
- (BOOL)enableOverwriteFromServer;
- (id)syncDeleteCondition:(id)a0;
- (long long)partialCacheCapacity;
- (long long)fullCacheLoadPolicy;
- (id)tableNameInDatabase;
- (BOOL)isValid;
- (id)displayName;
- (id)init;
- (long long)cacheMode;
- (Class)modelClass;
- (id)tableName;
- (long long)syncType;

@end
