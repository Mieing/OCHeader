@class NSArray, NSString;

@interface AWELocalUserCenterResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *tableModels;
@property (copy, nonatomic) NSString *tableMeta;
@property (copy, nonatomic) NSString *pageParam;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long syncType;
@property (copy, nonatomic) NSString *currentUserID;

+ (id)tableModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
