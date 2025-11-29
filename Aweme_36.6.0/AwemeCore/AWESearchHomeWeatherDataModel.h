@class NSString, NSNumber;

@interface AWESearchHomeWeatherDataModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *city;
@property (retain, nonatomic) NSNumber *temp;
@property (copy, nonatomic) NSString *weatherDes;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
