@class NSString;

@interface AWECodeGenInspirationSearchRecommendWordModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *word;
@property (nonatomic) long long groupId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
