@class NSString, AWEURLModel;

@interface AWECoverLabelModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *labelType;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) AWEURLModel *coverLabelURL;

+ (id)coverLabelURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
