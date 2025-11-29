@interface AFDLocalDataCenterRecommendReasonTable : AFDLocalDataCenterTable

- (BOOL)isValid;
- (id)displayName;
- (long long)cacheMode;
- (Class)modelClass;
- (id)tableName;
- (long long)syncType;

@end
