@class NSArray;

@interface AWEIMCodeGenGroupSquareBannerModuleInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *bannerListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
