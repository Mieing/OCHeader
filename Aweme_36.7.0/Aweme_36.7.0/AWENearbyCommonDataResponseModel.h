@class NSString, AWECityModel;

@interface AWENearbyCommonDataResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *activityDescription;
@property (retain, nonatomic) AWECityModel *currentLocatedCity;
@property (retain, nonatomic) AWECityModel *currentCityGrouponTab;
@property (retain, nonatomic) AWECityModel *currentCityGrouponPage;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
