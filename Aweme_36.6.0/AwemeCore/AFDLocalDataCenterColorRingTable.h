@interface AFDLocalDataCenterColorRingTable : AFDLocalDataCenterTable

- (id)syncQueryParams;
- (id)reportQueryParams;
- (BOOL)isValid;
- (id)displayName;
- (Class)modelClass;
- (id)tableName;
- (long long)syncType;

@end
