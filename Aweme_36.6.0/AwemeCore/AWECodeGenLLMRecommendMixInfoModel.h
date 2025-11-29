@class NSString;

@interface AWECodeGenLLMRecommendMixInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *recommendMixId;
@property (nonatomic) int itemCount;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *prefixTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *recommendReason;
@property (copy, nonatomic) NSString *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
