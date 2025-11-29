@class AWETeenDiscoverNavConfigModel;

@interface AWETeenDiscoverButtonAnimationResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWETeenDiscoverNavConfigModel *discovery;

+ (id)discoveryJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
