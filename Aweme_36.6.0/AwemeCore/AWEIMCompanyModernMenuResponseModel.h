@class NSArray;

@interface AWEIMCompanyModernMenuResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *menuList;

+ (id)menuListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
