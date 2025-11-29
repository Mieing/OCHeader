@class NSURL, NSString, NSArray;

@interface AWEIMFansGroupContributionTemplateModel : AWEBaseApiModel

@property (retain, nonatomic) NSURL *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *contributionInfoTemplate;
@property (copy, nonatomic) NSArray *templateParams;
@property (copy, nonatomic) NSString *ratioTitle;
@property (copy, nonatomic) NSString *ratioValue;
@property (nonatomic) long long type;

+ (id)templateParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
