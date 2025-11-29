@class AWEURLModel;

@interface AWEBarIconModel : AWEBarViewBaseModel

@property (copy, nonatomic) AWEURLModel *url;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)urlJSONTransformer;

- (void).cxx_destruct;

@end
