@class NSArray;

@interface AWECodeGenItemEntRightInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *entRightsModelArray;
@property (nonatomic) long long rightStatus;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
