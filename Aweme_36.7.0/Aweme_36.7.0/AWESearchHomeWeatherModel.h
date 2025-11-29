@class AWESearchHomeWeatherDataModel, AWESearchHomeWeatherExtraModel;

@interface AWESearchHomeWeatherModel : AWEBaseApiModel

@property (retain, nonatomic) AWESearchHomeWeatherDataModel *data;
@property (copy, nonatomic) AWESearchHomeWeatherExtraModel *extra;

+ (id)extraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
