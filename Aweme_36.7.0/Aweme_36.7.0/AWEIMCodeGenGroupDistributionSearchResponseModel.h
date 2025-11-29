@class NSArray, NSString, NSDictionary;

@interface AWEIMCodeGenGroupDistributionSearchResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *groupListModelArray;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *nextCursor;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *trackingExt;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
