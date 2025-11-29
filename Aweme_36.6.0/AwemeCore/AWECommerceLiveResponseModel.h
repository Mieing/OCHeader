@class AWECommerceLiveComponentsModel;

@interface AWECommerceLiveResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWECommerceLiveComponentsModel *commerceModel;

+ (id)commerceModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
