@class NSString;

@interface AWECodeGenLocationInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *poiId;
@property (copy, nonatomic) NSString *locationText;
@property (nonatomic) long long distance;
@property (copy, nonatomic) NSString *poiLongitude;
@property (copy, nonatomic) NSString *poiLatitude;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *cityCode;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *poiAddress;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
