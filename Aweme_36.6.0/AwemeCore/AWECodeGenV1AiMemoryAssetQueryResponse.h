@class NSArray;

@interface AWECodeGenV1AiMemoryAssetQueryResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *assetStructListModelArray;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
