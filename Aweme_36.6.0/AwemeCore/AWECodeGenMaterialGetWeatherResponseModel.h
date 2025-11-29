@class NSString;

@interface AWECodeGenMaterialGetWeatherResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *data;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
