@class NSString;

@interface BDPRegionModel : BDPBasePluginModel

@property (copy, nonatomic) NSString *provinceName;
@property (copy, nonatomic) NSString *provinceCode;
@property (copy, nonatomic) NSString *cityName;
@property (copy, nonatomic) NSString *cityCode;
@property (copy, nonatomic) NSString *countyName;
@property (copy, nonatomic) NSString *countyCode;

- (void).cxx_destruct;

@end
