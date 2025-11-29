@class NSArray;

@interface IESIMCodeGenUserTagLevelModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *levelKeyArray;
@property (copy, nonatomic) NSArray *personalizedLevelModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
