@class NSArray;

@interface AWECodeGenNearbyCreatorTagsModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *baseInfoModelArray;
@property (copy, nonatomic) NSArray *extraInfoModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
