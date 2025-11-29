@class NSArray;

@interface IESIMInfoOtherSceneGroupAppletInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *appletList;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
