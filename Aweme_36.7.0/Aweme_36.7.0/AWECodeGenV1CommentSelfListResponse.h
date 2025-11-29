@class NSArray;

@interface AWECodeGenV1CommentSelfListResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *commentListModelArray;
@property (nonatomic) long long hasMore;
@property (nonatomic) long long maxTime;
@property (nonatomic) long long minTime;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
