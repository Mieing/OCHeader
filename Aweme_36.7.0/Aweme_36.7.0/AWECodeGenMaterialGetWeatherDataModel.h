@class NSDictionary, AWECodeGenMaterialGetWeatherNowModel, NSArray;

@interface AWECodeGenMaterialGetWeatherDataModel : AWEBaseDataModel

@property (copy, nonatomic) NSDictionary *location;
@property (retain, nonatomic) AWECodeGenMaterialGetWeatherNowModel *nowModel;
@property (copy, nonatomic) NSArray *forecastsArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
