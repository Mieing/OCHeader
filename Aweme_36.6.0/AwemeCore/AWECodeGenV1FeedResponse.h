@class NSArray;

@interface AWECodeGenV1FeedResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *awemeListModelArray;
@property (nonatomic) long long nextOffset;
@property (nonatomic) BOOL hasMore;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
