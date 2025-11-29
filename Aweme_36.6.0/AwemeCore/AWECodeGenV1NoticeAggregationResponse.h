@class NSArray;

@interface AWECodeGenV1NoticeAggregationResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *noticeListV2ModelArray;
@property (nonatomic) long long hasMore;
@property (nonatomic) int total;
@property (nonatomic) long long maxTime;
@property (nonatomic) long long minTime;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
