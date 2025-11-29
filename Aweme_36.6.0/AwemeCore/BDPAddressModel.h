@class NSString;

@interface BDPAddressModel : BDPBasePluginModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *provinceName;
@property (copy, nonatomic) NSString *provinceCode;
@property (copy, nonatomic) NSString *cityName;
@property (copy, nonatomic) NSString *cityCode;
@property (copy, nonatomic) NSString *countyName;
@property (copy, nonatomic) NSString *countyCode;
@property (copy, nonatomic) NSString *cityId;
@property (copy, nonatomic) NSString *detailInfo;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) long long nationalCode;
@property (nonatomic) BOOL isDefault;
@property (nonatomic) long long addrId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
