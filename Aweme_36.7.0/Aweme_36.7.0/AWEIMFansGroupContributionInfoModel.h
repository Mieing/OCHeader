@class NSString, NSArray;

@interface AWEIMFansGroupContributionInfoModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *contributionTemplateList;
@property (copy, nonatomic) NSString *businessInfoUrl;

+ (id)contributionTemplateListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
