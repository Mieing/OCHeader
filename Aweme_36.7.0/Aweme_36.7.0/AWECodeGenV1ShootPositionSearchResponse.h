@class NSArray;

@interface AWECodeGenV1ShootPositionSearchResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *positionListModelArray;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long nextCursor;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
