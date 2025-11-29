@class NSString;

@interface AWEDiscoverySearchFeedbackModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *plainText;
@property (copy, nonatomic) NSString *highlightText;
@property (copy, nonatomic) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
