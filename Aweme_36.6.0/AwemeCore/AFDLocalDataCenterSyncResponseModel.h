@class NSArray, NSString;

@interface AFDLocalDataCenterSyncResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *tableModels;
@property (copy, nonatomic) NSString *tableMeta;
@property (copy, nonatomic) NSString *pageParam;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long syncType;
@property (copy, nonatomic) NSString *currentUserID;
@property (nonatomic) BOOL shouldClearTable;
@property (copy, nonatomic) NSString *tableName;

+ (id)tableModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
