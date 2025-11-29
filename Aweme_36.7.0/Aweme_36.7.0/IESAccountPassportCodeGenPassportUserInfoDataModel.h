@class NSArray;

@interface IESAccountPassportCodeGenPassportUserInfoDataModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *userInfosModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
