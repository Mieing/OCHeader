@class NSArray;

@interface AWECodeGenV1MateApplyListResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *applicationsModelArray;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long maxTimestamp;
@property (nonatomic) long long minTimestamp;
@property (nonatomic) long long lastWaterline;
@property (nonatomic) int unreadTotalCount;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
