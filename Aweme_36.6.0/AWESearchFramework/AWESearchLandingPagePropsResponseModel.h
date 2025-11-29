@class AWESearchLandingPageEffectsListModel;

@interface AWESearchLandingPagePropsResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWESearchLandingPageEffectsListModel *propsList;

+ (id)propListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
