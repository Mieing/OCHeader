@class NSString;

@interface AWECodeGenActivityGuideModel : AWEBaseDataModel

@property (nonatomic) long long activityId;
@property (nonatomic) long long offset;
@property (copy, nonatomic) NSString *guideText;
@property (copy, nonatomic) NSString *guideIconUrl;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *startColor;
@property (copy, nonatomic) NSString *endColor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
