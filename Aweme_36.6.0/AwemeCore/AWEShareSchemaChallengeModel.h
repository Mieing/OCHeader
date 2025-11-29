@class NSString;

@interface AWEShareSchemaChallengeModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *challengeName;
@property (copy, nonatomic) NSString *authorName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
