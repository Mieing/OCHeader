@class NSArray;

@interface AWECodeGenV1UserBlockStoryListResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *blockListModelArray;
@property (nonatomic) long long lastCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) int total;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
