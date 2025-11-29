@class NSArray;

@interface IESIMCodeGenGetTagApplicationListResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *tagApplicationListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
