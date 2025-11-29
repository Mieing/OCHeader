@class NSArray, AWEEnterpriseToastInfoModel;

@interface AWEEnterpriseTagModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *enterpriseTagInfos;
@property (copy, nonatomic) AWEEnterpriseToastInfoModel *enterpriseToastInfos;

+ (id)enterpriseTagInfosJSONTransformer;
+ (id)enterpriseToastInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
