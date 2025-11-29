@class NSString;

@interface AWECommentRiskConfigModel : AWEBaseApiModel

@property (nonatomic) unsigned long long commentRiskDisplayType;
@property (copy, nonatomic) NSString *commentRiskText;
@property (nonatomic) unsigned long long commentRiskColorType;
@property (copy, nonatomic) NSString *commentRiskIconLight;
@property (copy, nonatomic) NSString *commentRiskIconDark;
@property (copy, nonatomic) NSString *commentRiskUrl;
@property (nonatomic) long long commentRiskSceneId;

+ (id)commentRiskDisplayTypeJSONTransformer;
+ (id)commentRiskColorTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
