@class NSArray;

@interface AWECodeGenLandingSwitchEditInfoModel : AWEBaseDataModel

@property (nonatomic) long long switchLandingTabId;
@property (copy, nonatomic) NSArray *landingSwitchsEditModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
