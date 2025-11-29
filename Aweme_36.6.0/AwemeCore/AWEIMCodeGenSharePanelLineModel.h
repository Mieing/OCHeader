@class NSArray;

@interface AWEIMCodeGenSharePanelLineModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *lineModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)modelContainerPropertyGenericClass;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)initWithButtons:(id)a0;

@end
