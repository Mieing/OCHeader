@class NSString, NSArray;

@interface IESIMCodeGenGroupActionCheckFilterPopupModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *titleIconLight;
@property (copy, nonatomic) NSString *titleIconDark;
@property (copy, nonatomic) NSString *actionDesc;
@property (copy, nonatomic) NSArray *actionRuleListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
