@class NSString;

@interface AWECoverLabelModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *labelType;
@property (copy, nonatomic) NSString *text;

+ (id)coverLabelURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
