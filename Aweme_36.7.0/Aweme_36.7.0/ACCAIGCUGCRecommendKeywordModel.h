@class NSString, NSArray, ACCAIGCUGCGenderRecommendKeywordModel;

@interface ACCAIGCUGCRecommendKeywordModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) NSArray *totalRecommendWord;
@property (retain, nonatomic) ACCAIGCUGCGenderRecommendKeywordModel *genderRecommendWord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)totalRecommendWordJSONTransformer;
+ (id)genderRecommendWordJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
