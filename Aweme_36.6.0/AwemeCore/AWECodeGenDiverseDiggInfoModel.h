@class NSArray;

@interface AWECodeGenDiverseDiggInfoModel : AWEBaseDataModel

@property (nonatomic) BOOL showDiverseDiggElement;
@property (copy, nonatomic) NSArray *diverseDiggInfosModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
