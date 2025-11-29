@class NSArray;

@interface AWEIMCodeGenGetSelfGroupListActiveResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *activeGroupListModelArray;
@property (copy, nonatomic) NSArray *inactiveGroupListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
