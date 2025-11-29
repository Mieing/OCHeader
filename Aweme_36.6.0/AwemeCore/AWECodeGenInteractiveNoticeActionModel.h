@class NSArray;

@interface AWECodeGenInteractiveNoticeActionModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *actionListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
