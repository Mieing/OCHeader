@class NSString, NSNumber;

@interface AWESearchResultLifeServiceGlobalInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *strHotelPOIResultItemEmptyToastText;
@property (copy, nonatomic) NSString *strTargetPOIID;
@property (copy, nonatomic) NSNumber *shouldClearCachedCityInfo;
@property (copy, nonatomic) NSString *strUpdatedCityCode;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
