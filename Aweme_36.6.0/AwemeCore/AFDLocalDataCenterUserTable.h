@interface AFDLocalDataCenterUserTable : AFDLocalDataCenterTable

- (BOOL)enableOverwriteFromServer;
- (id)displayName;
- (Class)modelClass;
- (id)tableName;
- (long long)syncType;

@end
