@class NSDictionary;

@interface AWECodeGenAwemeMaterialInfoModel : AWEBaseDataModel

@property (nonatomic) long long awemeId;
@property (copy, nonatomic) NSDictionary *effect;
@property (copy, nonatomic) NSDictionary *template;
@property (nonatomic) long long materialType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
