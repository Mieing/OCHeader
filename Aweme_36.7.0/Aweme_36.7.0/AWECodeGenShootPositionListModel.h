@class NSArray;

@interface AWECodeGenShootPositionListModel : AWEBaseDataModel

@property (nonatomic) int total;
@property (copy, nonatomic) NSArray *positionListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
