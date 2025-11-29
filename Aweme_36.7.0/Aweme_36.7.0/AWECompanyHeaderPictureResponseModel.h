@class AWEModuleMap;

@interface AWECompanyHeaderPictureResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEModuleMap *moduleMap;

+ (id)moduleMapJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
