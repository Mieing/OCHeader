@class NSString;

@interface AWECodeGenMaterialGetWeatherNowModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (nonatomic) int temp;
@property (nonatomic) int feelsLike;
@property (nonatomic) int rh;
@property (copy, nonatomic) NSString *windClass;
@property (copy, nonatomic) NSString *windDir;
@property (copy, nonatomic) NSString *uptime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
